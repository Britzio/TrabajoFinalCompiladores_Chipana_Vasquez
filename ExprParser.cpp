
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "prog", "registro", "datosPacienteSentence", "diagnosticoSentence", 
      "fechasSentence", "medicamentoSentence"
    },
    std::vector<std::string>{
      "", "'Paciente:'", "','", "'Diagnostico:'", "'Expede:'", "'Caduce:'", 
      "'Medicamento:'", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "PALABRAS", "INT", "CONCENTRACION", 
      "FECHA", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,12,139,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,0,1,0,1,1,1,1,1,1,4,1,23,8,1,11,1,12,1,24,1,1,1,1,
  	1,2,1,2,5,2,31,8,2,10,2,12,2,34,9,2,1,2,1,2,1,2,5,2,39,8,2,10,2,12,2,
  	42,9,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,5,3,55,8,3,10,3,12,
  	3,58,9,3,1,3,1,3,1,4,1,4,5,4,64,8,4,10,4,12,4,67,9,4,1,4,1,4,5,4,71,8,
  	4,10,4,12,4,74,9,4,1,4,1,4,5,4,78,8,4,10,4,12,4,81,9,4,1,4,1,4,1,5,1,
  	5,5,5,87,8,5,10,5,12,5,90,9,5,1,5,1,5,1,5,5,5,95,8,5,10,5,12,5,98,9,5,
  	1,5,1,5,1,5,5,5,103,8,5,10,5,12,5,106,9,5,1,5,1,5,1,5,5,5,111,8,5,10,
  	5,12,5,114,9,5,1,5,1,5,1,5,5,5,119,8,5,10,5,12,5,122,9,5,1,5,4,5,125,
  	8,5,11,5,12,5,126,1,5,1,5,5,5,131,8,5,10,5,12,5,134,9,5,1,5,1,5,1,5,1,
  	5,0,0,6,0,2,4,6,8,10,0,0,147,0,13,1,0,0,0,2,19,1,0,0,0,4,28,1,0,0,0,6,
  	52,1,0,0,0,8,61,1,0,0,0,10,84,1,0,0,0,12,14,3,2,1,0,13,12,1,0,0,0,14,
  	15,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,17,1,0,0,0,17,18,5,0,0,1,18,
  	1,1,0,0,0,19,20,3,4,2,0,20,22,3,6,3,0,21,23,3,10,5,0,22,21,1,0,0,0,23,
  	24,1,0,0,0,24,22,1,0,0,0,24,25,1,0,0,0,25,26,1,0,0,0,26,27,3,8,4,0,27,
  	3,1,0,0,0,28,32,5,1,0,0,29,31,5,12,0,0,30,29,1,0,0,0,31,34,1,0,0,0,32,
  	30,1,0,0,0,32,33,1,0,0,0,33,35,1,0,0,0,34,32,1,0,0,0,35,36,5,8,0,0,36,
  	40,5,2,0,0,37,39,5,12,0,0,38,37,1,0,0,0,39,42,1,0,0,0,40,38,1,0,0,0,40,
  	41,1,0,0,0,41,43,1,0,0,0,42,40,1,0,0,0,43,44,5,9,0,0,44,45,5,9,0,0,45,
  	46,5,9,0,0,46,47,5,9,0,0,47,48,5,9,0,0,48,49,5,9,0,0,49,50,5,9,0,0,50,
  	51,5,9,0,0,51,5,1,0,0,0,52,56,5,3,0,0,53,55,5,12,0,0,54,53,1,0,0,0,55,
  	58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,0,0,0,59,
  	60,5,8,0,0,60,7,1,0,0,0,61,65,5,4,0,0,62,64,5,12,0,0,63,62,1,0,0,0,64,
  	67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,68,1,0,0,0,67,65,1,0,0,0,68,
  	72,5,11,0,0,69,71,5,12,0,0,70,69,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,
  	72,73,1,0,0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,79,5,5,0,0,76,78,5,12,0,
  	0,77,76,1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,82,1,0,0,
  	0,81,79,1,0,0,0,82,83,5,11,0,0,83,9,1,0,0,0,84,88,5,6,0,0,85,87,5,12,
  	0,0,86,85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,
  	0,0,90,88,1,0,0,0,91,92,5,8,0,0,92,96,5,2,0,0,93,95,5,12,0,0,94,93,1,
  	0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,99,1,0,0,0,98,96,1,
  	0,0,0,99,100,5,10,0,0,100,104,5,2,0,0,101,103,5,12,0,0,102,101,1,0,0,
  	0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,107,1,0,0,0,106,
  	104,1,0,0,0,107,108,5,8,0,0,108,112,5,2,0,0,109,111,5,12,0,0,110,109,
  	1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,115,1,0,0,
  	0,114,112,1,0,0,0,115,116,5,8,0,0,116,120,5,2,0,0,117,119,5,12,0,0,118,
  	117,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,124,1,
  	0,0,0,122,120,1,0,0,0,123,125,5,9,0,0,124,123,1,0,0,0,125,126,1,0,0,0,
  	126,124,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,132,5,2,0,0,129,131,
  	5,12,0,0,130,129,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,133,1,0,
  	0,0,133,135,1,0,0,0,134,132,1,0,0,0,135,136,5,8,0,0,136,137,5,7,0,0,137,
  	11,1,0,0,0,15,15,24,32,40,56,65,72,79,88,96,104,112,120,126,132
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}

std::vector<ExprParser::RegistroContext *> ExprParser::ProgContext::registro() {
  return getRuleContexts<ExprParser::RegistroContext>();
}

ExprParser::RegistroContext* ExprParser::ProgContext::registro(size_t i) {
  return getRuleContext<ExprParser::RegistroContext>(i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}


std::any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      registro();
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::T__0);
    setState(17);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegistroContext ------------------------------------------------------------------

ExprParser::RegistroContext::RegistroContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::DatosPacienteSentenceContext* ExprParser::RegistroContext::datosPacienteSentence() {
  return getRuleContext<ExprParser::DatosPacienteSentenceContext>(0);
}

ExprParser::DiagnosticoSentenceContext* ExprParser::RegistroContext::diagnosticoSentence() {
  return getRuleContext<ExprParser::DiagnosticoSentenceContext>(0);
}

ExprParser::FechasSentenceContext* ExprParser::RegistroContext::fechasSentence() {
  return getRuleContext<ExprParser::FechasSentenceContext>(0);
}

std::vector<ExprParser::MedicamentoSentenceContext *> ExprParser::RegistroContext::medicamentoSentence() {
  return getRuleContexts<ExprParser::MedicamentoSentenceContext>();
}

ExprParser::MedicamentoSentenceContext* ExprParser::RegistroContext::medicamentoSentence(size_t i) {
  return getRuleContext<ExprParser::MedicamentoSentenceContext>(i);
}


size_t ExprParser::RegistroContext::getRuleIndex() const {
  return ExprParser::RuleRegistro;
}


std::any ExprParser::RegistroContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRegistro(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::RegistroContext* ExprParser::registro() {
  RegistroContext *_localctx = _tracker.createInstance<RegistroContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleRegistro);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    datosPacienteSentence();
    setState(20);
    diagnosticoSentence();
    setState(22); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(21);
      medicamentoSentence();
      setState(24); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::T__5);
    setState(26);
    fechasSentence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatosPacienteSentenceContext ------------------------------------------------------------------

ExprParser::DatosPacienteSentenceContext::DatosPacienteSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::DatosPacienteSentenceContext::PALABRAS() {
  return getToken(ExprParser::PALABRAS, 0);
}

std::vector<tree::TerminalNode *> ExprParser::DatosPacienteSentenceContext::INT() {
  return getTokens(ExprParser::INT);
}

tree::TerminalNode* ExprParser::DatosPacienteSentenceContext::INT(size_t i) {
  return getToken(ExprParser::INT, i);
}

std::vector<tree::TerminalNode *> ExprParser::DatosPacienteSentenceContext::WS() {
  return getTokens(ExprParser::WS);
}

tree::TerminalNode* ExprParser::DatosPacienteSentenceContext::WS(size_t i) {
  return getToken(ExprParser::WS, i);
}


size_t ExprParser::DatosPacienteSentenceContext::getRuleIndex() const {
  return ExprParser::RuleDatosPacienteSentence;
}


std::any ExprParser::DatosPacienteSentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatosPacienteSentence(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DatosPacienteSentenceContext* ExprParser::datosPacienteSentence() {
  DatosPacienteSentenceContext *_localctx = _tracker.createInstance<DatosPacienteSentenceContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleDatosPacienteSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(ExprParser::T__0);
    setState(32);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(29);
      match(ExprParser::WS);
      setState(34);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(35);
    match(ExprParser::PALABRAS);
    setState(36);
    match(ExprParser::T__1);
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(37);
      match(ExprParser::WS);
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(43);
    match(ExprParser::INT);
    setState(44);
    match(ExprParser::INT);
    setState(45);
    match(ExprParser::INT);
    setState(46);
    match(ExprParser::INT);
    setState(47);
    match(ExprParser::INT);
    setState(48);
    match(ExprParser::INT);
    setState(49);
    match(ExprParser::INT);
    setState(50);
    match(ExprParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiagnosticoSentenceContext ------------------------------------------------------------------

ExprParser::DiagnosticoSentenceContext::DiagnosticoSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::DiagnosticoSentenceContext::PALABRAS() {
  return getToken(ExprParser::PALABRAS, 0);
}

std::vector<tree::TerminalNode *> ExprParser::DiagnosticoSentenceContext::WS() {
  return getTokens(ExprParser::WS);
}

tree::TerminalNode* ExprParser::DiagnosticoSentenceContext::WS(size_t i) {
  return getToken(ExprParser::WS, i);
}


size_t ExprParser::DiagnosticoSentenceContext::getRuleIndex() const {
  return ExprParser::RuleDiagnosticoSentence;
}


std::any ExprParser::DiagnosticoSentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDiagnosticoSentence(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DiagnosticoSentenceContext* ExprParser::diagnosticoSentence() {
  DiagnosticoSentenceContext *_localctx = _tracker.createInstance<DiagnosticoSentenceContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleDiagnosticoSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(ExprParser::T__2);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(53);
      match(ExprParser::WS);
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(ExprParser::PALABRAS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FechasSentenceContext ------------------------------------------------------------------

ExprParser::FechasSentenceContext::FechasSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::FechasSentenceContext::FECHA() {
  return getTokens(ExprParser::FECHA);
}

tree::TerminalNode* ExprParser::FechasSentenceContext::FECHA(size_t i) {
  return getToken(ExprParser::FECHA, i);
}

std::vector<tree::TerminalNode *> ExprParser::FechasSentenceContext::WS() {
  return getTokens(ExprParser::WS);
}

tree::TerminalNode* ExprParser::FechasSentenceContext::WS(size_t i) {
  return getToken(ExprParser::WS, i);
}


size_t ExprParser::FechasSentenceContext::getRuleIndex() const {
  return ExprParser::RuleFechasSentence;
}


std::any ExprParser::FechasSentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFechasSentence(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FechasSentenceContext* ExprParser::fechasSentence() {
  FechasSentenceContext *_localctx = _tracker.createInstance<FechasSentenceContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleFechasSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(ExprParser::T__3);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(62);
      match(ExprParser::WS);
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
    match(ExprParser::FECHA);
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(69);
      match(ExprParser::WS);
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(75);
    match(ExprParser::T__4);
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(76);
      match(ExprParser::WS);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(82);
    match(ExprParser::FECHA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MedicamentoSentenceContext ------------------------------------------------------------------

ExprParser::MedicamentoSentenceContext::MedicamentoSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::MedicamentoSentenceContext::PALABRAS() {
  return getTokens(ExprParser::PALABRAS);
}

tree::TerminalNode* ExprParser::MedicamentoSentenceContext::PALABRAS(size_t i) {
  return getToken(ExprParser::PALABRAS, i);
}

tree::TerminalNode* ExprParser::MedicamentoSentenceContext::CONCENTRACION() {
  return getToken(ExprParser::CONCENTRACION, 0);
}

std::vector<tree::TerminalNode *> ExprParser::MedicamentoSentenceContext::WS() {
  return getTokens(ExprParser::WS);
}

tree::TerminalNode* ExprParser::MedicamentoSentenceContext::WS(size_t i) {
  return getToken(ExprParser::WS, i);
}

std::vector<tree::TerminalNode *> ExprParser::MedicamentoSentenceContext::INT() {
  return getTokens(ExprParser::INT);
}

tree::TerminalNode* ExprParser::MedicamentoSentenceContext::INT(size_t i) {
  return getToken(ExprParser::INT, i);
}


size_t ExprParser::MedicamentoSentenceContext::getRuleIndex() const {
  return ExprParser::RuleMedicamentoSentence;
}


std::any ExprParser::MedicamentoSentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMedicamentoSentence(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::MedicamentoSentenceContext* ExprParser::medicamentoSentence() {
  MedicamentoSentenceContext *_localctx = _tracker.createInstance<MedicamentoSentenceContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleMedicamentoSentence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(ExprParser::T__5);
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(85);
      match(ExprParser::WS);
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(91);
    match(ExprParser::PALABRAS);
    setState(92);
    match(ExprParser::T__1);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(93);
      match(ExprParser::WS);
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(ExprParser::CONCENTRACION);
    setState(100);
    match(ExprParser::T__1);
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(101);
      match(ExprParser::WS);
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(107);
    match(ExprParser::PALABRAS);
    setState(108);
    match(ExprParser::T__1);
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(109);
      match(ExprParser::WS);
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(115);
    match(ExprParser::PALABRAS);
    setState(116);
    match(ExprParser::T__1);
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(117);
      match(ExprParser::WS);
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(123);
      match(ExprParser::INT);
      setState(126); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::INT);
    setState(128);
    match(ExprParser::T__1);
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::WS) {
      setState(129);
      match(ExprParser::WS);
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(135);
    match(ExprParser::PALABRAS);
    setState(136);
    match(ExprParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprParserInitialize();
#else
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
#endif
}
