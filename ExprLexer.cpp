
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "PALABRAS", 
      "INT", "CONCENTRACION", "FECHA", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,12,123,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,4,7,83,
  	8,7,11,7,12,7,84,1,7,1,7,4,7,89,8,7,11,7,12,7,90,5,7,93,8,7,10,7,12,7,
  	96,9,7,1,8,1,8,1,9,4,9,101,8,9,11,9,12,9,102,1,9,1,9,1,9,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,4,11,118,8,11,11,11,12,11,119,1,
  	11,1,11,0,0,12,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,1,0,3,14,0,65,90,97,122,193,193,201,201,205,205,209,209,211,211,218,
  	218,225,225,233,233,237,237,241,241,243,243,250,250,1,0,48,57,3,0,9,10,
  	13,13,32,32,127,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,1,25,1,0,0,0,3,35,1,0,0,0,5,37,1,0,0,0,7,
  	50,1,0,0,0,9,58,1,0,0,0,11,66,1,0,0,0,13,79,1,0,0,0,15,82,1,0,0,0,17,
  	97,1,0,0,0,19,100,1,0,0,0,21,107,1,0,0,0,23,117,1,0,0,0,25,26,5,80,0,
  	0,26,27,5,97,0,0,27,28,5,99,0,0,28,29,5,105,0,0,29,30,5,101,0,0,30,31,
  	5,110,0,0,31,32,5,116,0,0,32,33,5,101,0,0,33,34,5,58,0,0,34,2,1,0,0,0,
  	35,36,5,44,0,0,36,4,1,0,0,0,37,38,5,68,0,0,38,39,5,105,0,0,39,40,5,97,
  	0,0,40,41,5,103,0,0,41,42,5,110,0,0,42,43,5,111,0,0,43,44,5,115,0,0,44,
  	45,5,116,0,0,45,46,5,105,0,0,46,47,5,99,0,0,47,48,5,111,0,0,48,49,5,58,
  	0,0,49,6,1,0,0,0,50,51,5,69,0,0,51,52,5,120,0,0,52,53,5,112,0,0,53,54,
  	5,101,0,0,54,55,5,100,0,0,55,56,5,101,0,0,56,57,5,58,0,0,57,8,1,0,0,0,
  	58,59,5,67,0,0,59,60,5,97,0,0,60,61,5,100,0,0,61,62,5,117,0,0,62,63,5,
  	99,0,0,63,64,5,101,0,0,64,65,5,58,0,0,65,10,1,0,0,0,66,67,5,77,0,0,67,
  	68,5,101,0,0,68,69,5,100,0,0,69,70,5,105,0,0,70,71,5,99,0,0,71,72,5,97,
  	0,0,72,73,5,109,0,0,73,74,5,101,0,0,74,75,5,110,0,0,75,76,5,116,0,0,76,
  	77,5,111,0,0,77,78,5,58,0,0,78,12,1,0,0,0,79,80,5,46,0,0,80,14,1,0,0,
  	0,81,83,7,0,0,0,82,81,1,0,0,0,83,84,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,
  	0,85,94,1,0,0,0,86,88,5,32,0,0,87,89,7,0,0,0,88,87,1,0,0,0,89,90,1,0,
  	0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,86,1,0,0,0,93,96,1,0,
  	0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,16,1,0,0,0,96,94,1,0,0,0,97,98,7,1,
  	0,0,98,18,1,0,0,0,99,101,3,17,8,0,100,99,1,0,0,0,101,102,1,0,0,0,102,
  	100,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,5,32,0,0,105,106,
  	3,15,7,0,106,20,1,0,0,0,107,108,3,17,8,0,108,109,3,17,8,0,109,110,5,45,
  	0,0,110,111,3,17,8,0,111,112,3,17,8,0,112,113,5,45,0,0,113,114,3,17,8,
  	0,114,115,3,17,8,0,115,22,1,0,0,0,116,118,7,2,0,0,117,116,1,0,0,0,118,
  	119,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,121,1,0,0,0,121,122,6,
  	11,0,0,122,24,1,0,0,0,6,0,84,90,94,102,119,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
#endif
}
