
// Generated from Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual std::any visitProg(ExprParser::ProgContext *context) = 0;

    virtual std::any visitRegistro(ExprParser::RegistroContext *context) = 0;

    virtual std::any visitDatosPacienteSentence(ExprParser::DatosPacienteSentenceContext *context) = 0;

    virtual std::any visitDiagnosticoSentence(ExprParser::DiagnosticoSentenceContext *context) = 0;

    virtual std::any visitFechasSentence(ExprParser::FechasSentenceContext *context) = 0;

    virtual std::any visitMedicamentoSentence(ExprParser::MedicamentoSentenceContext *context) = 0;


};

