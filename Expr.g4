
grammar Expr;

// --- Reglas Sintácticas - Parser ---
prog:
    (registro)+ EOF
    ;

registro:
    datosPacienteSentence diagnosticoSentence medicamentoSentence+ fechasSentence
    ;

// --- SubReglas Sintácticas - Parser ---
datosPacienteSentence:
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

// --- Reglas Léxicas (Tokens) - Lexer ---
PALABRAS :   [a-zA-ZáéíóúÁÉÍÓÚñÑ]+ ( ' ' [a-zA-ZáéíóúÁÉÍÓÚñÑ]+ )* ;
INT :      [0-9] ;
CONCENTRACION : INT+ ' ' PALABRAS ;
FECHA :    INT INT '-' INT INT '-' INT INT ;

WS  : [ \t\r\n]+ -> skip ;
