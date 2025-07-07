#include "antlr4-runtime.h"
#include "ExprBaseVisitor.h"
#include "ExprLexer.h"
#include "ExprParser.h"

#include <cmath>
#include <map>

using namespace antlr4;	//Analisis sintactico
using namespace std;

// Estructura de medicamento - info del medicamento
struct Medicamento {
    string nombre;
    string concentracion;
    string forma;
    string via;
    string cantidad;
    string indicacion;
};
// Estructura de la receta medica - receta por paciente
struct Paciente {
    string nombre;
    string dni;
    string diagnostico;
    string expede;
    string caduce;
    vector<Medicamento> medicamentos;
};
// ExprBaseVisitor, arbol de analisis
class ExprDriver : public ExprBaseVisitor {
private:
    vector<Paciente> pacientes;	// todas las recetas del archivo
    Paciente pacienteActual;	// paciente actual procesado
    map<string, int> diagnosticoFrecuencia;	// repeticiones por diagnostico
    map<string, int> medicamentosTotales;  // cant total por medicamento

public:

    /** --- Reglas Sintacticas - Parser-- -
prog:
    (registro)+ EOF
    ;
registro:
    datosPacienteSentence diagnosticoSentence medicamentoSentence+ fechasSentence
    ;
*/

    /** --- SubReglas Sintacticas - Parser-- -
datosPacienteSentence :
    'Paciente:' WS* PALABRAS ',' WS* INT INT INT INT INT INT INT INT
        ;
diagnosticoSentence:
    'Diagnostico:' WS* PALABRAS
        ;
fechasSentence:
    'Expede:' WS* FECHA WS* 'Caduce:' WS* FECHA
        ;
medicamentoSentence:
    'Medicamento:' WS* PALABRAS ',' WS* CONCENTRACION ',' WS* PALABRAS ',' WS* PALABRAS ',' WS* INT+ ',' WS* PALABRAS '.'
        ;
*/

    // Detecta una frase que combina sentencias Paciente, Diagnostico, Fecha y Medicamentos
    //  datosPacienteSentence diagnosticoSentence medicamentoSentence+ fechasSentence
    std::any visitRegistro(ExprParser::RegistroContext* ctx) override {
        pacienteActual = Paciente(); // Recibir datos de la receta/paciente
        visitChildren(ctx);
        pacientes.push_back(pacienteActual);	// guardar info
        return nullptr;
    }

    // Parser detecta una frase seg�n:
        // 'Paciente:' WS * PALABRAS ',' WS * INT INT INT INT INT INT INT INT
        // Imprime la frase reconocida.
    std::any visitDatosPacienteSentence(ExprParser::DatosPacienteSentenceContext* ctx) override {
        pacienteActual.nombre = ctx->PALABRAS()->getText();	// guarda nombre
        string dni;
        for (auto d : ctx->INT()) dni += d->getText();
        pacienteActual.dni = dni; // guarda dni

        return nullptr;
    }

        //'Diagnostico:' WS * PALABRAS        
        // Imprime la frase reconocida.
    std::any visitDiagnosticoSentence(ExprParser::DiagnosticoSentenceContext* ctx) override {
        pacienteActual.diagnostico = ctx->PALABRAS()->getText();	// guardar diagnostico
        diagnosticoFrecuencia[pacienteActual.diagnostico]++; // contar diagnosticos
        return nullptr;
    }

        //'Expede:' WS * FECHA WS * 'Caduce:' WS * FECHA      
        // Imprime la frase reconocida.
    std::any visitFechasSentence(ExprParser::FechasSentenceContext* ctx) override {
        auto fechas = ctx->FECHA();	// recibir fechas
        pacienteActual.expede = fechas[0]->getText();
        pacienteActual.caduce = fechas[1]->getText();

        return nullptr;
    }

        //'Medicamento:' WS * PALABRAS ',' WS * CONCENTRACION ',' WS * PALABRAS ',' WS * PALABRAS ',' WS * INT + ',' WS * PALABRAS '.'
        // Imprime la frase reconocida.
    std::any visitMedicamentoSentence(ExprParser::MedicamentoSentenceContext* ctx) override {
        Medicamento med;
        auto palabras = ctx->PALABRAS();	// recibir info del medicamento
        med.nombre = palabras[0]->getText();	// nombre medicamento
        med.concentracion = ctx->CONCENTRACION()->getText();	// concentracion
        med.forma = palabras[1]->getText();	// forma
        med.via = palabras[2]->getText();	// via

        med.cantidad = "";
        for (auto n : ctx->INT()) med.cantidad += n->getText(); // Guardar num en string
        int cant = stoi(med.cantidad);  // Conversion a int
        medicamentosTotales[med.nombre] += cant;    // Contar medicamentos

        med.indicacion = "";	// indicacion
        for (size_t i = 3; i < palabras.size(); ++i)
            med.indicacion += palabras[i]->getText() + " ";
        if (!med.indicacion.empty()) med.indicacion.pop_back();	// remover ultimo espacio

        pacienteActual.medicamentos.push_back(med);	// guardar medicamento en el paciente actual
        return nullptr;
    }

    // Detecta una frase Registro / Punto de entrada
    //  (registro)+ EOF
    std::any visitProg(ExprParser::ProgContext* ctx) override {
        visitChildren(ctx);
        // Imprimir reporte de recetas medicas
        for (const auto& p : pacientes) {
            cout << "==========================\n";
            cout << "Nombre: " << p.nombre << endl;
            cout << "DNI: " << p.dni << endl;
            cout << "Diagnóstico: " << p.diagnostico << endl;
            cout << "Expede: " << p.expede << " | Caduce: " << p.caduce << endl;
            cout << "Medicamentos:\n";
            for (const auto& m : p.medicamentos) {
                cout << "  - " << m.nombre << ", " << m.concentracion << ", "
                     << m.forma << ", " << m.via << ", " << m.cantidad
                     << ", " << m.indicacion << "\n";
            }
        }

        // Resumen final
        cout << "\n=============== RESUMEN FINAL ===============\n";
        cout << "Numero total de pacientes: " << pacientes.size() << endl;
        
        // Diagnóstico más frecuente
        string diagFrecuente;
        int maxFreq = 0;
        for (const auto& par : diagnosticoFrecuencia) {
            // Si encuentra una frecuencia mayor, la guarda
            if (par.second > maxFreq) {
                maxFreq = par.second;
                diagFrecuente = par.first;
            }
        }	// imprimir el diagnostico mas frecuente
        cout << "Diagnóstico más frecuente: " << diagFrecuente << " (" << maxFreq << " casos diagnosticados)." << endl;

        // Medicamentos y cantidades totales
        cout << "Total de medicamentos recetados:\n";
        for (const auto& par : medicamentosTotales) {
            // Imprimir medicamento y cantidad calculada
            cout << "  - " << par.first << ": " << par.second << " unidades\n";
        }

        return nullptr;
    }
};