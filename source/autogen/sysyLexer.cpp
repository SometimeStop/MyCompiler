
// Generated from sysy.g4 by ANTLR 4.12.0


#include "sysyLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SysyLexerStaticData final {
  SysyLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SysyLexerStaticData(const SysyLexerStaticData&) = delete;
  SysyLexerStaticData(SysyLexerStaticData&&) = delete;
  SysyLexerStaticData& operator=(const SysyLexerStaticData&) = delete;
  SysyLexerStaticData& operator=(SysyLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag sysylexerLexerOnceFlag;
SysyLexerStaticData *sysylexerLexerStaticData = nullptr;

void sysylexerLexerInitialize() {
  assert(sysylexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<SysyLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T_CONST", "T_INT", "T_VOID", "T_IF", "T_WHILE", "T_BREAK", 
      "T_CONTINUE", "T_RETURN", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", 
      "T_LT", "T_GT", "T_LE", "T_GE", "T_EQ", "T_NE", "T_AND", "T_OR", "T_NOT", 
      "T_DEC_CONST", "T_OCT_CONST", "T_HEX_CONST", "T_ID", "WS", "LineComment", 
      "MultiLineComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "','", "';'", "'['", "']'", "'='", "'{'", "'}'", "'('", "')'", 
      "'else'", "'const'", "'int'", "'void'", "'if'", "'while'", "'break'", 
      "'continue'", "'return'", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", 
      "'>'", "'<='", "'>='", "'=='", "'!='", "'&&'", "'||'", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "T_CONST", "T_INT", "T_VOID", 
      "T_IF", "T_WHILE", "T_BREAK", "T_CONTINUE", "T_RETURN", "T_ADD", "T_SUB", 
      "T_MUL", "T_DIV", "T_MOD", "T_LT", "T_GT", "T_LE", "T_GE", "T_EQ", 
      "T_NE", "T_AND", "T_OR", "T_NOT", "T_DEC_CONST", "T_OCT_CONST", "T_HEX_CONST", 
      "T_ID", "WS", "LineComment", "MultiLineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,39,247,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,
  	13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,
  	24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,
  	29,1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,32,1,32,5,32,185,8,32,10,32,12,
  	32,188,9,32,1,33,1,33,5,33,192,8,33,10,33,12,33,195,9,33,1,34,1,34,1,
  	34,1,34,3,34,201,8,34,1,34,5,34,204,8,34,10,34,12,34,207,9,34,1,35,1,
  	35,5,35,211,8,35,10,35,12,35,214,9,35,1,36,4,36,217,8,36,11,36,12,36,
  	218,1,36,1,36,1,37,1,37,1,37,1,37,5,37,227,8,37,10,37,12,37,230,9,37,
  	1,37,1,37,1,38,1,38,1,38,1,38,5,38,238,8,38,10,38,12,38,241,9,38,1,38,
  	1,38,1,38,1,38,1,38,1,239,0,39,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,
  	65,33,67,34,69,35,71,36,73,37,75,38,77,39,1,0,8,1,0,49,57,1,0,48,57,1,
  	0,48,55,3,0,48,57,65,70,97,102,3,0,65,90,95,95,97,122,4,0,48,57,65,90,
  	95,95,97,122,3,0,9,10,13,13,32,32,2,0,10,10,13,13,254,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,
  	1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,
  	0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,
  	1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,
  	0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,
  	1,79,1,0,0,0,3,81,1,0,0,0,5,83,1,0,0,0,7,85,1,0,0,0,9,87,1,0,0,0,11,89,
  	1,0,0,0,13,91,1,0,0,0,15,93,1,0,0,0,17,95,1,0,0,0,19,97,1,0,0,0,21,102,
  	1,0,0,0,23,108,1,0,0,0,25,112,1,0,0,0,27,117,1,0,0,0,29,120,1,0,0,0,31,
  	126,1,0,0,0,33,132,1,0,0,0,35,141,1,0,0,0,37,148,1,0,0,0,39,150,1,0,0,
  	0,41,152,1,0,0,0,43,154,1,0,0,0,45,156,1,0,0,0,47,158,1,0,0,0,49,160,
  	1,0,0,0,51,162,1,0,0,0,53,165,1,0,0,0,55,168,1,0,0,0,57,171,1,0,0,0,59,
  	174,1,0,0,0,61,177,1,0,0,0,63,180,1,0,0,0,65,182,1,0,0,0,67,189,1,0,0,
  	0,69,200,1,0,0,0,71,208,1,0,0,0,73,216,1,0,0,0,75,222,1,0,0,0,77,233,
  	1,0,0,0,79,80,5,44,0,0,80,2,1,0,0,0,81,82,5,59,0,0,82,4,1,0,0,0,83,84,
  	5,91,0,0,84,6,1,0,0,0,85,86,5,93,0,0,86,8,1,0,0,0,87,88,5,61,0,0,88,10,
  	1,0,0,0,89,90,5,123,0,0,90,12,1,0,0,0,91,92,5,125,0,0,92,14,1,0,0,0,93,
  	94,5,40,0,0,94,16,1,0,0,0,95,96,5,41,0,0,96,18,1,0,0,0,97,98,5,101,0,
  	0,98,99,5,108,0,0,99,100,5,115,0,0,100,101,5,101,0,0,101,20,1,0,0,0,102,
  	103,5,99,0,0,103,104,5,111,0,0,104,105,5,110,0,0,105,106,5,115,0,0,106,
  	107,5,116,0,0,107,22,1,0,0,0,108,109,5,105,0,0,109,110,5,110,0,0,110,
  	111,5,116,0,0,111,24,1,0,0,0,112,113,5,118,0,0,113,114,5,111,0,0,114,
  	115,5,105,0,0,115,116,5,100,0,0,116,26,1,0,0,0,117,118,5,105,0,0,118,
  	119,5,102,0,0,119,28,1,0,0,0,120,121,5,119,0,0,121,122,5,104,0,0,122,
  	123,5,105,0,0,123,124,5,108,0,0,124,125,5,101,0,0,125,30,1,0,0,0,126,
  	127,5,98,0,0,127,128,5,114,0,0,128,129,5,101,0,0,129,130,5,97,0,0,130,
  	131,5,107,0,0,131,32,1,0,0,0,132,133,5,99,0,0,133,134,5,111,0,0,134,135,
  	5,110,0,0,135,136,5,116,0,0,136,137,5,105,0,0,137,138,5,110,0,0,138,139,
  	5,117,0,0,139,140,5,101,0,0,140,34,1,0,0,0,141,142,5,114,0,0,142,143,
  	5,101,0,0,143,144,5,116,0,0,144,145,5,117,0,0,145,146,5,114,0,0,146,147,
  	5,110,0,0,147,36,1,0,0,0,148,149,5,43,0,0,149,38,1,0,0,0,150,151,5,45,
  	0,0,151,40,1,0,0,0,152,153,5,42,0,0,153,42,1,0,0,0,154,155,5,47,0,0,155,
  	44,1,0,0,0,156,157,5,37,0,0,157,46,1,0,0,0,158,159,5,60,0,0,159,48,1,
  	0,0,0,160,161,5,62,0,0,161,50,1,0,0,0,162,163,5,60,0,0,163,164,5,61,0,
  	0,164,52,1,0,0,0,165,166,5,62,0,0,166,167,5,61,0,0,167,54,1,0,0,0,168,
  	169,5,61,0,0,169,170,5,61,0,0,170,56,1,0,0,0,171,172,5,33,0,0,172,173,
  	5,61,0,0,173,58,1,0,0,0,174,175,5,38,0,0,175,176,5,38,0,0,176,60,1,0,
  	0,0,177,178,5,124,0,0,178,179,5,124,0,0,179,62,1,0,0,0,180,181,5,33,0,
  	0,181,64,1,0,0,0,182,186,7,0,0,0,183,185,7,1,0,0,184,183,1,0,0,0,185,
  	188,1,0,0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,66,1,0,0,0,188,186,1,
  	0,0,0,189,193,5,48,0,0,190,192,7,2,0,0,191,190,1,0,0,0,192,195,1,0,0,
  	0,193,191,1,0,0,0,193,194,1,0,0,0,194,68,1,0,0,0,195,193,1,0,0,0,196,
  	197,5,48,0,0,197,201,5,120,0,0,198,199,5,48,0,0,199,201,5,88,0,0,200,
  	196,1,0,0,0,200,198,1,0,0,0,201,205,1,0,0,0,202,204,7,3,0,0,203,202,1,
  	0,0,0,204,207,1,0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,70,1,0,0,0,
  	207,205,1,0,0,0,208,212,7,4,0,0,209,211,7,5,0,0,210,209,1,0,0,0,211,214,
  	1,0,0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,72,1,0,0,0,214,212,1,0,0,
  	0,215,217,7,6,0,0,216,215,1,0,0,0,217,218,1,0,0,0,218,216,1,0,0,0,218,
  	219,1,0,0,0,219,220,1,0,0,0,220,221,6,36,0,0,221,74,1,0,0,0,222,223,5,
  	47,0,0,223,224,5,47,0,0,224,228,1,0,0,0,225,227,8,7,0,0,226,225,1,0,0,
  	0,227,230,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,231,1,0,0,0,230,
  	228,1,0,0,0,231,232,6,37,0,0,232,76,1,0,0,0,233,234,5,47,0,0,234,235,
  	5,42,0,0,235,239,1,0,0,0,236,238,9,0,0,0,237,236,1,0,0,0,238,241,1,0,
  	0,0,239,240,1,0,0,0,239,237,1,0,0,0,240,242,1,0,0,0,241,239,1,0,0,0,242,
  	243,5,42,0,0,243,244,5,47,0,0,244,245,1,0,0,0,245,246,6,38,0,0,246,78,
  	1,0,0,0,9,0,186,193,200,205,212,218,228,239,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sysylexerLexerStaticData = staticData.release();
}

}

sysyLexer::sysyLexer(CharStream *input) : Lexer(input) {
  sysyLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *sysylexerLexerStaticData->atn, sysylexerLexerStaticData->decisionToDFA, sysylexerLexerStaticData->sharedContextCache);
}

sysyLexer::~sysyLexer() {
  delete _interpreter;
}

std::string sysyLexer::getGrammarFileName() const {
  return "sysy.g4";
}

const std::vector<std::string>& sysyLexer::getRuleNames() const {
  return sysylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& sysyLexer::getChannelNames() const {
  return sysylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& sysyLexer::getModeNames() const {
  return sysylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& sysyLexer::getVocabulary() const {
  return sysylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView sysyLexer::getSerializedATN() const {
  return sysylexerLexerStaticData->serializedATN;
}

const atn::ATN& sysyLexer::getATN() const {
  return *sysylexerLexerStaticData->atn;
}




void sysyLexer::initialize() {
  ::antlr4::internal::call_once(sysylexerLexerOnceFlag, sysylexerLexerInitialize);
}
