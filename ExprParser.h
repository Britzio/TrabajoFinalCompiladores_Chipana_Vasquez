
// Generated from Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    PALABRAS = 8, INT = 9, CONCENTRACION = 10, FECHA = 11, WS = 12
  };

  enum {
    RuleProg = 0, RuleRegistro = 1, RuleDatosPacienteSentence = 2, RuleDiagnosticoSentence = 3, 
    RuleFechasSentence = 4, RuleMedicamentoSentence = 5
  };

  explicit ExprParser(antlr4::TokenStream *input);

  ExprParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExprParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class RegistroContext;
  class DatosPacienteSentenceContext;
  class DiagnosticoSentenceContext;
  class FechasSentenceContext;
  class MedicamentoSentenceContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<RegistroContext *> registro();
    RegistroContext* registro(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  RegistroContext : public antlr4::ParserRuleContext {
  public:
    RegistroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DatosPacienteSentenceContext *datosPacienteSentence();
    DiagnosticoSentenceContext *diagnosticoSentence();
    FechasSentenceContext *fechasSentence();
    std::vector<MedicamentoSentenceContext *> medicamentoSentence();
    MedicamentoSentenceContext* medicamentoSentence(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegistroContext* registro();

  class  DatosPacienteSentenceContext : public antlr4::ParserRuleContext {
  public:
    DatosPacienteSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PALABRAS();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatosPacienteSentenceContext* datosPacienteSentence();

  class  DiagnosticoSentenceContext : public antlr4::ParserRuleContext {
  public:
    DiagnosticoSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PALABRAS();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiagnosticoSentenceContext* diagnosticoSentence();

  class  FechasSentenceContext : public antlr4::ParserRuleContext {
  public:
    FechasSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FECHA();
    antlr4::tree::TerminalNode* FECHA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FechasSentenceContext* fechasSentence();

  class  MedicamentoSentenceContext : public antlr4::ParserRuleContext {
  public:
    MedicamentoSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PALABRAS();
    antlr4::tree::TerminalNode* PALABRAS(size_t i);
    antlr4::tree::TerminalNode *CONCENTRACION();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MedicamentoSentenceContext* medicamentoSentence();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

