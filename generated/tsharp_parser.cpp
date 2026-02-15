
// Generated from tsharp_parser.g4 by ANTLR 4.13.2


#include "tsharp_parserListener.h"
#include "tsharp_parserVisitor.h"

#include "tsharp_parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Tsharp_parserStaticData final {
  Tsharp_parserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Tsharp_parserStaticData(const Tsharp_parserStaticData&) = delete;
  Tsharp_parserStaticData(Tsharp_parserStaticData&&) = delete;
  Tsharp_parserStaticData& operator=(const Tsharp_parserStaticData&) = delete;
  Tsharp_parserStaticData& operator=(Tsharp_parserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tsharp_parserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Tsharp_parserStaticData> tsharp_parserParserStaticData = nullptr;

void tsharp_parserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tsharp_parserParserStaticData != nullptr) {
    return;
  }
#else
  assert(tsharp_parserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Tsharp_parserStaticData>(
    std::vector<std::string>{
      "program", "main_function", "function", "function_arg", "func_body", 
      "func_call", "func_call_arg", "return_statement", "class", "field", 
      "constructor", "constructor_body", "object_inst", "assignment", "expression", 
      "type", "custom_type", "any_type", "if_statement", "else_if_statement", 
      "else_statement", "pi_constant", "absolute_value", "square_root", 
      "exponent_fn", "println_statement", "print_statement"
    },
    std::vector<std::string>{
      "", "", "", "'class'", "'public'", "'private'", "'this'", "'.'", "'int'", 
      "'float'", "'string'", "'void'", "'main'", "'if'", "'else'", "'=='", 
      "'println'", "'print'", "'abs'", "'sqrt'", "'exp'", "'pi'", "'return'", 
      "','", "'+'", "'-'", "", "", "", "", "'='", "'('", "')'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "WS", "COMMENT", "CLASS", "PUBLIC", "PRIVATE", "THIS", "DOT", 
      "INT", "FLOAT", "STRING", "VOID", "MAIN", "IF", "ELSE", "EQUIVALENCE", 
      "PRINTLN", "PRINT", "ABS", "SQRT", "EXP", "PI", "RETURN", "COMMA", 
      "PLUS", "MINUS", "ID", "NUM", "FLOAT_LIT", "STRING_LIT", "EQUALS", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_CURLY_BRACE", "CLOSE_CURLY_BRACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,346,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,5,0,56,8,0,10,
  	0,12,0,59,9,0,1,0,5,0,62,8,0,10,0,12,0,65,9,0,1,0,1,0,1,0,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,87,8,1,10,
  	1,12,1,90,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,5,2,99,8,2,10,2,12,2,102,9,
  	2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,3,3,112,8,3,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,5,4,121,8,4,10,4,12,4,124,9,4,1,4,3,4,127,8,4,1,5,1,5,1,5,5,5,132,
  	8,5,10,5,12,5,135,9,5,1,5,1,5,1,6,1,6,3,6,141,8,6,1,7,1,7,1,7,1,7,1,7,
  	3,7,148,8,7,1,8,1,8,1,8,1,8,5,8,154,8,8,10,8,12,8,157,9,8,1,8,4,8,160,
  	8,8,11,8,12,8,161,1,8,5,8,165,8,8,10,8,12,8,168,9,8,1,8,1,8,1,9,1,9,1,
  	9,1,9,1,10,1,10,1,10,1,10,5,10,180,8,10,10,10,12,10,183,9,10,1,10,1,10,
  	1,10,3,10,188,8,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,
  	199,8,11,10,11,12,11,202,9,11,1,12,1,12,1,12,1,12,1,12,5,12,209,8,12,
  	10,12,12,12,212,9,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,3,13,222,
  	8,13,1,14,1,14,3,14,226,8,14,1,14,1,14,1,14,1,14,3,14,232,8,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,242,8,14,3,14,244,8,14,1,15,1,15,
  	1,16,1,16,1,17,1,17,3,17,252,8,17,1,18,1,18,1,18,1,18,1,18,3,18,259,8,
  	18,1,18,1,18,1,18,1,18,1,18,3,18,266,8,18,1,18,1,18,1,18,1,18,1,19,1,
  	19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,22,1,22,3,22,286,
  	8,22,1,22,1,22,1,23,1,23,1,23,1,23,3,23,294,8,23,1,23,1,23,1,24,1,24,
  	1,24,1,24,3,24,302,8,24,1,24,1,24,1,24,3,24,307,8,24,1,24,1,24,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,5,25,324,8,
  	25,10,25,12,25,327,9,25,1,25,3,25,330,8,25,1,25,1,25,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,3,26,342,8,26,1,26,1,26,1,26,0,0,27,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,7,
  	1,0,4,5,2,0,21,21,26,29,2,0,21,21,26,28,2,0,21,21,27,29,1,0,24,25,1,0,
  	8,11,1,0,27,28,392,0,57,1,0,0,0,2,69,1,0,0,0,4,93,1,0,0,0,6,108,1,0,0,
  	0,8,122,1,0,0,0,10,128,1,0,0,0,12,138,1,0,0,0,14,142,1,0,0,0,16,149,1,
  	0,0,0,18,171,1,0,0,0,20,175,1,0,0,0,22,200,1,0,0,0,24,203,1,0,0,0,26,
  	215,1,0,0,0,28,225,1,0,0,0,30,245,1,0,0,0,32,247,1,0,0,0,34,251,1,0,0,
  	0,36,253,1,0,0,0,38,271,1,0,0,0,40,274,1,0,0,0,42,279,1,0,0,0,44,281,
  	1,0,0,0,46,289,1,0,0,0,48,297,1,0,0,0,50,310,1,0,0,0,52,333,1,0,0,0,54,
  	56,3,16,8,0,55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,1,0,0,0,58,
  	63,1,0,0,0,59,57,1,0,0,0,60,62,3,4,2,0,61,60,1,0,0,0,62,65,1,0,0,0,63,
  	61,1,0,0,0,63,64,1,0,0,0,64,66,1,0,0,0,65,63,1,0,0,0,66,67,3,2,1,0,67,
  	68,5,0,0,1,68,1,1,0,0,0,69,70,5,11,0,0,70,71,5,12,0,0,71,72,5,31,0,0,
  	72,73,5,32,0,0,73,88,5,33,0,0,74,87,3,50,25,0,75,87,3,52,26,0,76,87,3,
  	26,13,0,77,87,3,44,22,0,78,87,3,46,23,0,79,87,3,48,24,0,80,87,3,10,5,
  	0,81,87,3,28,14,0,82,87,3,24,12,0,83,87,3,36,18,0,84,87,3,38,19,0,85,
  	87,3,40,20,0,86,74,1,0,0,0,86,75,1,0,0,0,86,76,1,0,0,0,86,77,1,0,0,0,
  	86,78,1,0,0,0,86,79,1,0,0,0,86,80,1,0,0,0,86,81,1,0,0,0,86,82,1,0,0,0,
  	86,83,1,0,0,0,86,84,1,0,0,0,86,85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,
  	88,89,1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,92,5,34,0,0,92,3,1,0,0,0,
  	93,94,7,0,0,0,94,95,3,34,17,0,95,96,5,26,0,0,96,100,5,31,0,0,97,99,3,
  	6,3,0,98,97,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,
  	103,1,0,0,0,102,100,1,0,0,0,103,104,5,32,0,0,104,105,5,33,0,0,105,106,
  	3,8,4,0,106,107,5,34,0,0,107,5,1,0,0,0,108,109,3,34,17,0,109,111,5,26,
  	0,0,110,112,5,23,0,0,111,110,1,0,0,0,111,112,1,0,0,0,112,7,1,0,0,0,113,
  	121,3,50,25,0,114,121,3,52,26,0,115,121,3,26,13,0,116,121,3,44,22,0,117,
  	121,3,46,23,0,118,121,3,48,24,0,119,121,3,28,14,0,120,113,1,0,0,0,120,
  	114,1,0,0,0,120,115,1,0,0,0,120,116,1,0,0,0,120,117,1,0,0,0,120,118,1,
  	0,0,0,120,119,1,0,0,0,121,124,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,
  	123,126,1,0,0,0,124,122,1,0,0,0,125,127,3,14,7,0,126,125,1,0,0,0,126,
  	127,1,0,0,0,127,9,1,0,0,0,128,129,5,26,0,0,129,133,5,31,0,0,130,132,3,
  	12,6,0,131,130,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,
  	0,134,136,1,0,0,0,135,133,1,0,0,0,136,137,5,32,0,0,137,11,1,0,0,0,138,
  	140,7,1,0,0,139,141,5,23,0,0,140,139,1,0,0,0,140,141,1,0,0,0,141,13,1,
  	0,0,0,142,147,5,22,0,0,143,148,7,2,0,0,144,145,5,26,0,0,145,146,5,7,0,
  	0,146,148,3,10,5,0,147,143,1,0,0,0,147,144,1,0,0,0,148,15,1,0,0,0,149,
  	150,5,3,0,0,150,151,5,26,0,0,151,155,5,33,0,0,152,154,3,18,9,0,153,152,
  	1,0,0,0,154,157,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,159,1,0,0,
  	0,157,155,1,0,0,0,158,160,3,20,10,0,159,158,1,0,0,0,160,161,1,0,0,0,161,
  	159,1,0,0,0,161,162,1,0,0,0,162,166,1,0,0,0,163,165,3,4,2,0,164,163,1,
  	0,0,0,165,168,1,0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,169,1,0,0,0,
  	168,166,1,0,0,0,169,170,5,34,0,0,170,17,1,0,0,0,171,172,7,0,0,0,172,173,
  	3,34,17,0,173,174,5,26,0,0,174,19,1,0,0,0,175,176,7,0,0,0,176,177,5,26,
  	0,0,177,181,5,31,0,0,178,180,3,6,3,0,179,178,1,0,0,0,180,183,1,0,0,0,
  	181,179,1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,181,1,0,0,0,184,185,
  	5,32,0,0,185,187,5,33,0,0,186,188,3,22,11,0,187,186,1,0,0,0,187,188,1,
  	0,0,0,188,189,1,0,0,0,189,190,5,34,0,0,190,21,1,0,0,0,191,199,3,50,25,
  	0,192,199,3,52,26,0,193,199,3,26,13,0,194,199,3,44,22,0,195,199,3,46,
  	23,0,196,199,3,48,24,0,197,199,3,28,14,0,198,191,1,0,0,0,198,192,1,0,
  	0,0,198,193,1,0,0,0,198,194,1,0,0,0,198,195,1,0,0,0,198,196,1,0,0,0,198,
  	197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,23,1,
  	0,0,0,202,200,1,0,0,0,203,204,5,26,0,0,204,205,5,26,0,0,205,206,5,30,
  	0,0,206,210,5,31,0,0,207,209,3,12,6,0,208,207,1,0,0,0,209,212,1,0,0,0,
  	210,208,1,0,0,0,210,211,1,0,0,0,211,213,1,0,0,0,212,210,1,0,0,0,213,214,
  	5,32,0,0,214,25,1,0,0,0,215,216,3,34,17,0,216,217,5,26,0,0,217,221,5,
  	30,0,0,218,222,7,3,0,0,219,222,3,46,23,0,220,222,3,44,22,0,221,218,1,
  	0,0,0,221,219,1,0,0,0,221,220,1,0,0,0,222,27,1,0,0,0,223,224,5,6,0,0,
  	224,226,5,7,0,0,225,223,1,0,0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,
  	5,26,0,0,228,231,5,30,0,0,229,230,5,26,0,0,230,232,7,4,0,0,231,229,1,
  	0,0,0,231,232,1,0,0,0,232,243,1,0,0,0,233,244,5,6,0,0,234,244,5,26,0,
  	0,235,242,5,29,0,0,236,242,5,27,0,0,237,242,5,28,0,0,238,242,5,21,0,0,
  	239,242,3,46,23,0,240,242,3,44,22,0,241,235,1,0,0,0,241,236,1,0,0,0,241,
  	237,1,0,0,0,241,238,1,0,0,0,241,239,1,0,0,0,241,240,1,0,0,0,242,244,1,
  	0,0,0,243,233,1,0,0,0,243,234,1,0,0,0,243,241,1,0,0,0,244,29,1,0,0,0,
  	245,246,7,5,0,0,246,31,1,0,0,0,247,248,5,26,0,0,248,33,1,0,0,0,249,252,
  	3,30,15,0,250,252,3,32,16,0,251,249,1,0,0,0,251,250,1,0,0,0,252,35,1,
  	0,0,0,253,258,5,13,0,0,254,259,5,26,0,0,255,259,5,29,0,0,256,259,5,28,
  	0,0,257,259,5,27,0,0,258,254,1,0,0,0,258,255,1,0,0,0,258,256,1,0,0,0,
  	258,257,1,0,0,0,259,260,1,0,0,0,260,265,5,15,0,0,261,266,5,26,0,0,262,
  	266,5,29,0,0,263,266,5,28,0,0,264,266,5,27,0,0,265,261,1,0,0,0,265,262,
  	1,0,0,0,265,263,1,0,0,0,265,264,1,0,0,0,266,267,1,0,0,0,267,268,5,33,
  	0,0,268,269,3,8,4,0,269,270,5,34,0,0,270,37,1,0,0,0,271,272,5,14,0,0,
  	272,273,3,36,18,0,273,39,1,0,0,0,274,275,5,14,0,0,275,276,5,33,0,0,276,
  	277,3,8,4,0,277,278,5,34,0,0,278,41,1,0,0,0,279,280,5,21,0,0,280,43,1,
  	0,0,0,281,282,5,18,0,0,282,285,5,31,0,0,283,286,7,6,0,0,284,286,5,26,
  	0,0,285,283,1,0,0,0,285,284,1,0,0,0,286,287,1,0,0,0,287,288,5,32,0,0,
  	288,45,1,0,0,0,289,290,5,19,0,0,290,293,5,31,0,0,291,294,7,6,0,0,292,
  	294,5,26,0,0,293,291,1,0,0,0,293,292,1,0,0,0,294,295,1,0,0,0,295,296,
  	5,32,0,0,296,47,1,0,0,0,297,298,5,20,0,0,298,301,5,31,0,0,299,302,5,27,
  	0,0,300,302,5,26,0,0,301,299,1,0,0,0,301,300,1,0,0,0,302,303,1,0,0,0,
  	303,306,5,23,0,0,304,307,5,27,0,0,305,307,5,26,0,0,306,304,1,0,0,0,306,
  	305,1,0,0,0,307,308,1,0,0,0,308,309,5,32,0,0,309,49,1,0,0,0,310,311,5,
  	16,0,0,311,329,5,31,0,0,312,330,5,29,0,0,313,330,5,26,0,0,314,330,3,46,
  	23,0,315,330,3,44,22,0,316,330,5,21,0,0,317,330,3,10,5,0,318,319,5,26,
  	0,0,319,320,5,7,0,0,320,321,5,26,0,0,321,325,5,31,0,0,322,324,3,12,6,
  	0,323,322,1,0,0,0,324,327,1,0,0,0,325,323,1,0,0,0,325,326,1,0,0,0,326,
  	328,1,0,0,0,327,325,1,0,0,0,328,330,5,32,0,0,329,312,1,0,0,0,329,313,
  	1,0,0,0,329,314,1,0,0,0,329,315,1,0,0,0,329,316,1,0,0,0,329,317,1,0,0,
  	0,329,318,1,0,0,0,330,331,1,0,0,0,331,332,5,32,0,0,332,51,1,0,0,0,333,
  	334,5,17,0,0,334,341,5,31,0,0,335,342,5,29,0,0,336,342,5,26,0,0,337,342,
  	3,46,23,0,338,342,3,44,22,0,339,342,5,21,0,0,340,342,3,10,5,0,341,335,
  	1,0,0,0,341,336,1,0,0,0,341,337,1,0,0,0,341,338,1,0,0,0,341,339,1,0,0,
  	0,341,340,1,0,0,0,342,343,1,0,0,0,343,344,5,32,0,0,344,53,1,0,0,0,35,
  	57,63,86,88,100,111,120,122,126,133,140,147,155,161,166,181,187,198,200,
  	210,221,225,231,241,243,251,258,265,285,293,301,306,325,329,341
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tsharp_parserParserStaticData = std::move(staticData);
}

}

tsharp_parser::tsharp_parser(TokenStream *input) : tsharp_parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

tsharp_parser::tsharp_parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  tsharp_parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *tsharp_parserParserStaticData->atn, tsharp_parserParserStaticData->decisionToDFA, tsharp_parserParserStaticData->sharedContextCache, options);
}

tsharp_parser::~tsharp_parser() {
  delete _interpreter;
}

const atn::ATN& tsharp_parser::getATN() const {
  return *tsharp_parserParserStaticData->atn;
}

std::string tsharp_parser::getGrammarFileName() const {
  return "tsharp_parser.g4";
}

const std::vector<std::string>& tsharp_parser::getRuleNames() const {
  return tsharp_parserParserStaticData->ruleNames;
}

const dfa::Vocabulary& tsharp_parser::getVocabulary() const {
  return tsharp_parserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView tsharp_parser::getSerializedATN() const {
  return tsharp_parserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

tsharp_parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tsharp_parser::Main_functionContext* tsharp_parser::ProgramContext::main_function() {
  return getRuleContext<tsharp_parser::Main_functionContext>(0);
}

tree::TerminalNode* tsharp_parser::ProgramContext::EOF() {
  return getToken(tsharp_parser::EOF, 0);
}

std::vector<tsharp_parser::ClassContext *> tsharp_parser::ProgramContext::class_() {
  return getRuleContexts<tsharp_parser::ClassContext>();
}

tsharp_parser::ClassContext* tsharp_parser::ProgramContext::class_(size_t i) {
  return getRuleContext<tsharp_parser::ClassContext>(i);
}

std::vector<tsharp_parser::FunctionContext *> tsharp_parser::ProgramContext::function() {
  return getRuleContexts<tsharp_parser::FunctionContext>();
}

tsharp_parser::FunctionContext* tsharp_parser::ProgramContext::function(size_t i) {
  return getRuleContext<tsharp_parser::FunctionContext>(i);
}


size_t tsharp_parser::ProgramContext::getRuleIndex() const {
  return tsharp_parser::RuleProgram;
}

void tsharp_parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void tsharp_parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any tsharp_parser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::ProgramContext* tsharp_parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, tsharp_parser::RuleProgram);
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
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tsharp_parser::CLASS) {
      setState(54);
      class_();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tsharp_parser::PUBLIC

    || _la == tsharp_parser::PRIVATE) {
      setState(60);
      function();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    main_function();
    setState(67);
    match(tsharp_parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_functionContext ------------------------------------------------------------------

tsharp_parser::Main_functionContext::Main_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Main_functionContext::VOID() {
  return getToken(tsharp_parser::VOID, 0);
}

tree::TerminalNode* tsharp_parser::Main_functionContext::MAIN() {
  return getToken(tsharp_parser::MAIN, 0);
}

tree::TerminalNode* tsharp_parser::Main_functionContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Main_functionContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Main_functionContext::OPEN_CURLY_BRACE() {
  return getToken(tsharp_parser::OPEN_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::Main_functionContext::CLOSE_CURLY_BRACE() {
  return getToken(tsharp_parser::CLOSE_CURLY_BRACE, 0);
}

std::vector<tsharp_parser::Println_statementContext *> tsharp_parser::Main_functionContext::println_statement() {
  return getRuleContexts<tsharp_parser::Println_statementContext>();
}

tsharp_parser::Println_statementContext* tsharp_parser::Main_functionContext::println_statement(size_t i) {
  return getRuleContext<tsharp_parser::Println_statementContext>(i);
}

std::vector<tsharp_parser::Print_statementContext *> tsharp_parser::Main_functionContext::print_statement() {
  return getRuleContexts<tsharp_parser::Print_statementContext>();
}

tsharp_parser::Print_statementContext* tsharp_parser::Main_functionContext::print_statement(size_t i) {
  return getRuleContext<tsharp_parser::Print_statementContext>(i);
}

std::vector<tsharp_parser::AssignmentContext *> tsharp_parser::Main_functionContext::assignment() {
  return getRuleContexts<tsharp_parser::AssignmentContext>();
}

tsharp_parser::AssignmentContext* tsharp_parser::Main_functionContext::assignment(size_t i) {
  return getRuleContext<tsharp_parser::AssignmentContext>(i);
}

std::vector<tsharp_parser::Absolute_valueContext *> tsharp_parser::Main_functionContext::absolute_value() {
  return getRuleContexts<tsharp_parser::Absolute_valueContext>();
}

tsharp_parser::Absolute_valueContext* tsharp_parser::Main_functionContext::absolute_value(size_t i) {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(i);
}

std::vector<tsharp_parser::Square_rootContext *> tsharp_parser::Main_functionContext::square_root() {
  return getRuleContexts<tsharp_parser::Square_rootContext>();
}

tsharp_parser::Square_rootContext* tsharp_parser::Main_functionContext::square_root(size_t i) {
  return getRuleContext<tsharp_parser::Square_rootContext>(i);
}

std::vector<tsharp_parser::Exponent_fnContext *> tsharp_parser::Main_functionContext::exponent_fn() {
  return getRuleContexts<tsharp_parser::Exponent_fnContext>();
}

tsharp_parser::Exponent_fnContext* tsharp_parser::Main_functionContext::exponent_fn(size_t i) {
  return getRuleContext<tsharp_parser::Exponent_fnContext>(i);
}

std::vector<tsharp_parser::Func_callContext *> tsharp_parser::Main_functionContext::func_call() {
  return getRuleContexts<tsharp_parser::Func_callContext>();
}

tsharp_parser::Func_callContext* tsharp_parser::Main_functionContext::func_call(size_t i) {
  return getRuleContext<tsharp_parser::Func_callContext>(i);
}

std::vector<tsharp_parser::ExpressionContext *> tsharp_parser::Main_functionContext::expression() {
  return getRuleContexts<tsharp_parser::ExpressionContext>();
}

tsharp_parser::ExpressionContext* tsharp_parser::Main_functionContext::expression(size_t i) {
  return getRuleContext<tsharp_parser::ExpressionContext>(i);
}

std::vector<tsharp_parser::Object_instContext *> tsharp_parser::Main_functionContext::object_inst() {
  return getRuleContexts<tsharp_parser::Object_instContext>();
}

tsharp_parser::Object_instContext* tsharp_parser::Main_functionContext::object_inst(size_t i) {
  return getRuleContext<tsharp_parser::Object_instContext>(i);
}

std::vector<tsharp_parser::If_statementContext *> tsharp_parser::Main_functionContext::if_statement() {
  return getRuleContexts<tsharp_parser::If_statementContext>();
}

tsharp_parser::If_statementContext* tsharp_parser::Main_functionContext::if_statement(size_t i) {
  return getRuleContext<tsharp_parser::If_statementContext>(i);
}

std::vector<tsharp_parser::Else_if_statementContext *> tsharp_parser::Main_functionContext::else_if_statement() {
  return getRuleContexts<tsharp_parser::Else_if_statementContext>();
}

tsharp_parser::Else_if_statementContext* tsharp_parser::Main_functionContext::else_if_statement(size_t i) {
  return getRuleContext<tsharp_parser::Else_if_statementContext>(i);
}

std::vector<tsharp_parser::Else_statementContext *> tsharp_parser::Main_functionContext::else_statement() {
  return getRuleContexts<tsharp_parser::Else_statementContext>();
}

tsharp_parser::Else_statementContext* tsharp_parser::Main_functionContext::else_statement(size_t i) {
  return getRuleContext<tsharp_parser::Else_statementContext>(i);
}


size_t tsharp_parser::Main_functionContext::getRuleIndex() const {
  return tsharp_parser::RuleMain_function;
}

void tsharp_parser::Main_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMain_function(this);
}

void tsharp_parser::Main_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMain_function(this);
}


std::any tsharp_parser::Main_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitMain_function(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Main_functionContext* tsharp_parser::main_function() {
  Main_functionContext *_localctx = _tracker.createInstance<Main_functionContext>(_ctx, getState());
  enterRule(_localctx, 2, tsharp_parser::RuleMain_function);
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
    setState(69);
    match(tsharp_parser::VOID);
    setState(70);
    match(tsharp_parser::MAIN);
    setState(71);
    match(tsharp_parser::OPEN_BRACKET);
    setState(72);
    match(tsharp_parser::CLOSE_BRACKET);
    setState(73);
    match(tsharp_parser::OPEN_CURLY_BRACE);
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69168960) != 0)) {
      setState(86);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(74);
        println_statement();
        break;
      }

      case 2: {
        setState(75);
        print_statement();
        break;
      }

      case 3: {
        setState(76);
        assignment();
        break;
      }

      case 4: {
        setState(77);
        absolute_value();
        break;
      }

      case 5: {
        setState(78);
        square_root();
        break;
      }

      case 6: {
        setState(79);
        exponent_fn();
        break;
      }

      case 7: {
        setState(80);
        func_call();
        break;
      }

      case 8: {
        setState(81);
        expression();
        break;
      }

      case 9: {
        setState(82);
        object_inst();
        break;
      }

      case 10: {
        setState(83);
        if_statement();
        break;
      }

      case 11: {
        setState(84);
        else_if_statement();
        break;
      }

      case 12: {
        setState(85);
        else_statement();
        break;
      }

      default:
        break;
      }
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(91);
    match(tsharp_parser::CLOSE_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

tsharp_parser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::FunctionContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::FunctionContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::FunctionContext::OPEN_CURLY_BRACE() {
  return getToken(tsharp_parser::OPEN_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::FunctionContext::CLOSE_CURLY_BRACE() {
  return getToken(tsharp_parser::CLOSE_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::FunctionContext::PUBLIC() {
  return getToken(tsharp_parser::PUBLIC, 0);
}

tree::TerminalNode* tsharp_parser::FunctionContext::PRIVATE() {
  return getToken(tsharp_parser::PRIVATE, 0);
}

tsharp_parser::Any_typeContext* tsharp_parser::FunctionContext::any_type() {
  return getRuleContext<tsharp_parser::Any_typeContext>(0);
}

tree::TerminalNode* tsharp_parser::FunctionContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tsharp_parser::Func_bodyContext* tsharp_parser::FunctionContext::func_body() {
  return getRuleContext<tsharp_parser::Func_bodyContext>(0);
}

std::vector<tsharp_parser::Function_argContext *> tsharp_parser::FunctionContext::function_arg() {
  return getRuleContexts<tsharp_parser::Function_argContext>();
}

tsharp_parser::Function_argContext* tsharp_parser::FunctionContext::function_arg(size_t i) {
  return getRuleContext<tsharp_parser::Function_argContext>(i);
}


size_t tsharp_parser::FunctionContext::getRuleIndex() const {
  return tsharp_parser::RuleFunction;
}

void tsharp_parser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void tsharp_parser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any tsharp_parser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::FunctionContext* tsharp_parser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, tsharp_parser::RuleFunction);
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
    setState(93);
    _la = _input->LA(1);
    if (!(_la == tsharp_parser::PUBLIC

    || _la == tsharp_parser::PRIVATE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(94);
    antlrcpp::downCast<FunctionContext *>(_localctx)->TYPE = any_type();
    setState(95);
    antlrcpp::downCast<FunctionContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(96);
    match(tsharp_parser::OPEN_BRACKET);
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67112704) != 0)) {
      setState(97);
      antlrcpp::downCast<FunctionContext *>(_localctx)->function_argContext = function_arg();
      antlrcpp::downCast<FunctionContext *>(_localctx)->ARGS.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->function_argContext);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(tsharp_parser::CLOSE_BRACKET);
    setState(104);
    match(tsharp_parser::OPEN_CURLY_BRACE);
    setState(105);
    antlrcpp::downCast<FunctionContext *>(_localctx)->BODY = func_body();
    setState(106);
    match(tsharp_parser::CLOSE_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_argContext ------------------------------------------------------------------

tsharp_parser::Function_argContext::Function_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tsharp_parser::Any_typeContext* tsharp_parser::Function_argContext::any_type() {
  return getRuleContext<tsharp_parser::Any_typeContext>(0);
}

tree::TerminalNode* tsharp_parser::Function_argContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::Function_argContext::COMMA() {
  return getToken(tsharp_parser::COMMA, 0);
}


size_t tsharp_parser::Function_argContext::getRuleIndex() const {
  return tsharp_parser::RuleFunction_arg;
}

void tsharp_parser::Function_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_arg(this);
}

void tsharp_parser::Function_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_arg(this);
}


std::any tsharp_parser::Function_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitFunction_arg(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Function_argContext* tsharp_parser::function_arg() {
  Function_argContext *_localctx = _tracker.createInstance<Function_argContext>(_ctx, getState());
  enterRule(_localctx, 6, tsharp_parser::RuleFunction_arg);
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
    setState(108);
    antlrcpp::downCast<Function_argContext *>(_localctx)->TYPE = any_type();
    setState(109);
    antlrcpp::downCast<Function_argContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tsharp_parser::COMMA) {
      setState(110);
      match(tsharp_parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_bodyContext ------------------------------------------------------------------

tsharp_parser::Func_bodyContext::Func_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tsharp_parser::Println_statementContext *> tsharp_parser::Func_bodyContext::println_statement() {
  return getRuleContexts<tsharp_parser::Println_statementContext>();
}

tsharp_parser::Println_statementContext* tsharp_parser::Func_bodyContext::println_statement(size_t i) {
  return getRuleContext<tsharp_parser::Println_statementContext>(i);
}

std::vector<tsharp_parser::Print_statementContext *> tsharp_parser::Func_bodyContext::print_statement() {
  return getRuleContexts<tsharp_parser::Print_statementContext>();
}

tsharp_parser::Print_statementContext* tsharp_parser::Func_bodyContext::print_statement(size_t i) {
  return getRuleContext<tsharp_parser::Print_statementContext>(i);
}

std::vector<tsharp_parser::AssignmentContext *> tsharp_parser::Func_bodyContext::assignment() {
  return getRuleContexts<tsharp_parser::AssignmentContext>();
}

tsharp_parser::AssignmentContext* tsharp_parser::Func_bodyContext::assignment(size_t i) {
  return getRuleContext<tsharp_parser::AssignmentContext>(i);
}

std::vector<tsharp_parser::Absolute_valueContext *> tsharp_parser::Func_bodyContext::absolute_value() {
  return getRuleContexts<tsharp_parser::Absolute_valueContext>();
}

tsharp_parser::Absolute_valueContext* tsharp_parser::Func_bodyContext::absolute_value(size_t i) {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(i);
}

std::vector<tsharp_parser::Square_rootContext *> tsharp_parser::Func_bodyContext::square_root() {
  return getRuleContexts<tsharp_parser::Square_rootContext>();
}

tsharp_parser::Square_rootContext* tsharp_parser::Func_bodyContext::square_root(size_t i) {
  return getRuleContext<tsharp_parser::Square_rootContext>(i);
}

std::vector<tsharp_parser::Exponent_fnContext *> tsharp_parser::Func_bodyContext::exponent_fn() {
  return getRuleContexts<tsharp_parser::Exponent_fnContext>();
}

tsharp_parser::Exponent_fnContext* tsharp_parser::Func_bodyContext::exponent_fn(size_t i) {
  return getRuleContext<tsharp_parser::Exponent_fnContext>(i);
}

std::vector<tsharp_parser::ExpressionContext *> tsharp_parser::Func_bodyContext::expression() {
  return getRuleContexts<tsharp_parser::ExpressionContext>();
}

tsharp_parser::ExpressionContext* tsharp_parser::Func_bodyContext::expression(size_t i) {
  return getRuleContext<tsharp_parser::ExpressionContext>(i);
}

tsharp_parser::Return_statementContext* tsharp_parser::Func_bodyContext::return_statement() {
  return getRuleContext<tsharp_parser::Return_statementContext>(0);
}


size_t tsharp_parser::Func_bodyContext::getRuleIndex() const {
  return tsharp_parser::RuleFunc_body;
}

void tsharp_parser::Func_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_body(this);
}

void tsharp_parser::Func_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_body(this);
}


std::any tsharp_parser::Func_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitFunc_body(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Func_bodyContext* tsharp_parser::func_body() {
  Func_bodyContext *_localctx = _tracker.createInstance<Func_bodyContext>(_ctx, getState());
  enterRule(_localctx, 8, tsharp_parser::RuleFunc_body);
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
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69144384) != 0)) {
      setState(120);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(113);
        println_statement();
        break;
      }

      case 2: {
        setState(114);
        print_statement();
        break;
      }

      case 3: {
        setState(115);
        assignment();
        break;
      }

      case 4: {
        setState(116);
        absolute_value();
        break;
      }

      case 5: {
        setState(117);
        square_root();
        break;
      }

      case 6: {
        setState(118);
        exponent_fn();
        break;
      }

      case 7: {
        setState(119);
        expression();
        break;
      }

      default:
        break;
      }
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tsharp_parser::RETURN) {
      setState(125);
      return_statement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

tsharp_parser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Func_callContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Func_callContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Func_callContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

std::vector<tsharp_parser::Func_call_argContext *> tsharp_parser::Func_callContext::func_call_arg() {
  return getRuleContexts<tsharp_parser::Func_call_argContext>();
}

tsharp_parser::Func_call_argContext* tsharp_parser::Func_callContext::func_call_arg(size_t i) {
  return getRuleContext<tsharp_parser::Func_call_argContext>(i);
}


size_t tsharp_parser::Func_callContext::getRuleIndex() const {
  return tsharp_parser::RuleFunc_call;
}

void tsharp_parser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call(this);
}

void tsharp_parser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call(this);
}


std::any tsharp_parser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Func_callContext* tsharp_parser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 10, tsharp_parser::RuleFunc_call);
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
    setState(128);
    antlrcpp::downCast<Func_callContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(129);
    match(tsharp_parser::OPEN_BRACKET);
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008730112) != 0)) {
      setState(130);
      func_call_arg();
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_call_argContext ------------------------------------------------------------------

tsharp_parser::Func_call_argContext::Func_call_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Func_call_argContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::Func_call_argContext::FLOAT_LIT() {
  return getToken(tsharp_parser::FLOAT_LIT, 0);
}

tree::TerminalNode* tsharp_parser::Func_call_argContext::STRING_LIT() {
  return getToken(tsharp_parser::STRING_LIT, 0);
}

tree::TerminalNode* tsharp_parser::Func_call_argContext::NUM() {
  return getToken(tsharp_parser::NUM, 0);
}

tree::TerminalNode* tsharp_parser::Func_call_argContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}

tree::TerminalNode* tsharp_parser::Func_call_argContext::COMMA() {
  return getToken(tsharp_parser::COMMA, 0);
}


size_t tsharp_parser::Func_call_argContext::getRuleIndex() const {
  return tsharp_parser::RuleFunc_call_arg;
}

void tsharp_parser::Func_call_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call_arg(this);
}

void tsharp_parser::Func_call_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call_arg(this);
}


std::any tsharp_parser::Func_call_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitFunc_call_arg(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Func_call_argContext* tsharp_parser::func_call_arg() {
  Func_call_argContext *_localctx = _tracker.createInstance<Func_call_argContext>(_ctx, getState());
  enterRule(_localctx, 12, tsharp_parser::RuleFunc_call_arg);
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
    setState(138);
    antlrcpp::downCast<Func_call_argContext *>(_localctx)->VALUE = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008730112) != 0))) {
      antlrcpp::downCast<Func_call_argContext *>(_localctx)->VALUE = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tsharp_parser::COMMA) {
      setState(139);
      match(tsharp_parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

tsharp_parser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Return_statementContext::RETURN() {
  return getToken(tsharp_parser::RETURN, 0);
}

tree::TerminalNode* tsharp_parser::Return_statementContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::Return_statementContext::NUM() {
  return getToken(tsharp_parser::NUM, 0);
}

tree::TerminalNode* tsharp_parser::Return_statementContext::FLOAT_LIT() {
  return getToken(tsharp_parser::FLOAT_LIT, 0);
}

tree::TerminalNode* tsharp_parser::Return_statementContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}

tree::TerminalNode* tsharp_parser::Return_statementContext::DOT() {
  return getToken(tsharp_parser::DOT, 0);
}

tsharp_parser::Func_callContext* tsharp_parser::Return_statementContext::func_call() {
  return getRuleContext<tsharp_parser::Func_callContext>(0);
}


size_t tsharp_parser::Return_statementContext::getRuleIndex() const {
  return tsharp_parser::RuleReturn_statement;
}

void tsharp_parser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void tsharp_parser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


std::any tsharp_parser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Return_statementContext* tsharp_parser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, tsharp_parser::RuleReturn_statement);
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
    setState(142);
    match(tsharp_parser::RETURN);
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(143);
      antlrcpp::downCast<Return_statementContext *>(_localctx)->VAL = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 471859200) != 0))) {
        antlrcpp::downCast<Return_statementContext *>(_localctx)->VAL = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      setState(144);
      antlrcpp::downCast<Return_statementContext *>(_localctx)->OBJ_NAME = match(tsharp_parser::ID);
      setState(145);
      match(tsharp_parser::DOT);
      setState(146);
      antlrcpp::downCast<Return_statementContext *>(_localctx)->PROPERTY_NAME = func_call();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassContext ------------------------------------------------------------------

tsharp_parser::ClassContext::ClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::ClassContext::CLASS() {
  return getToken(tsharp_parser::CLASS, 0);
}

tree::TerminalNode* tsharp_parser::ClassContext::OPEN_CURLY_BRACE() {
  return getToken(tsharp_parser::OPEN_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::ClassContext::CLOSE_CURLY_BRACE() {
  return getToken(tsharp_parser::CLOSE_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::ClassContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

std::vector<tsharp_parser::FieldContext *> tsharp_parser::ClassContext::field() {
  return getRuleContexts<tsharp_parser::FieldContext>();
}

tsharp_parser::FieldContext* tsharp_parser::ClassContext::field(size_t i) {
  return getRuleContext<tsharp_parser::FieldContext>(i);
}

std::vector<tsharp_parser::ConstructorContext *> tsharp_parser::ClassContext::constructor() {
  return getRuleContexts<tsharp_parser::ConstructorContext>();
}

tsharp_parser::ConstructorContext* tsharp_parser::ClassContext::constructor(size_t i) {
  return getRuleContext<tsharp_parser::ConstructorContext>(i);
}

std::vector<tsharp_parser::FunctionContext *> tsharp_parser::ClassContext::function() {
  return getRuleContexts<tsharp_parser::FunctionContext>();
}

tsharp_parser::FunctionContext* tsharp_parser::ClassContext::function(size_t i) {
  return getRuleContext<tsharp_parser::FunctionContext>(i);
}


size_t tsharp_parser::ClassContext::getRuleIndex() const {
  return tsharp_parser::RuleClass;
}

void tsharp_parser::ClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass(this);
}

void tsharp_parser::ClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass(this);
}


std::any tsharp_parser::ClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitClass(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::ClassContext* tsharp_parser::class_() {
  ClassContext *_localctx = _tracker.createInstance<ClassContext>(_ctx, getState());
  enterRule(_localctx, 16, tsharp_parser::RuleClass);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(tsharp_parser::CLASS);
    setState(150);
    antlrcpp::downCast<ClassContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(151);
    match(tsharp_parser::OPEN_CURLY_BRACE);
    setState(155);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(152);
        antlrcpp::downCast<ClassContext *>(_localctx)->fieldContext = field();
        antlrcpp::downCast<ClassContext *>(_localctx)->FIELDS.push_back(antlrcpp::downCast<ClassContext *>(_localctx)->fieldContext); 
      }
      setState(157);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(159); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(158);
              antlrcpp::downCast<ClassContext *>(_localctx)->constructorContext = constructor();
              antlrcpp::downCast<ClassContext *>(_localctx)->CONSTRUCTORS.push_back(antlrcpp::downCast<ClassContext *>(_localctx)->constructorContext);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(161); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tsharp_parser::PUBLIC

    || _la == tsharp_parser::PRIVATE) {
      setState(163);
      antlrcpp::downCast<ClassContext *>(_localctx)->functionContext = function();
      antlrcpp::downCast<ClassContext *>(_localctx)->METHODS.push_back(antlrcpp::downCast<ClassContext *>(_localctx)->functionContext);
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(169);
    match(tsharp_parser::CLOSE_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

tsharp_parser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tsharp_parser::Any_typeContext* tsharp_parser::FieldContext::any_type() {
  return getRuleContext<tsharp_parser::Any_typeContext>(0);
}

tree::TerminalNode* tsharp_parser::FieldContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::FieldContext::PUBLIC() {
  return getToken(tsharp_parser::PUBLIC, 0);
}

tree::TerminalNode* tsharp_parser::FieldContext::PRIVATE() {
  return getToken(tsharp_parser::PRIVATE, 0);
}


size_t tsharp_parser::FieldContext::getRuleIndex() const {
  return tsharp_parser::RuleField;
}

void tsharp_parser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void tsharp_parser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}


std::any tsharp_parser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::FieldContext* tsharp_parser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 18, tsharp_parser::RuleField);
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
    setState(171);
    antlrcpp::downCast<FieldContext *>(_localctx)->ACCESS_IDENTIFIER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == tsharp_parser::PUBLIC

    || _la == tsharp_parser::PRIVATE)) {
      antlrcpp::downCast<FieldContext *>(_localctx)->ACCESS_IDENTIFIER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(172);
    antlrcpp::downCast<FieldContext *>(_localctx)->TYPE = any_type();
    setState(173);
    antlrcpp::downCast<FieldContext *>(_localctx)->NAME = match(tsharp_parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorContext ------------------------------------------------------------------

tsharp_parser::ConstructorContext::ConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::ConstructorContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::ConstructorContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::ConstructorContext::OPEN_CURLY_BRACE() {
  return getToken(tsharp_parser::OPEN_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::ConstructorContext::CLOSE_CURLY_BRACE() {
  return getToken(tsharp_parser::CLOSE_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::ConstructorContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::ConstructorContext::PUBLIC() {
  return getToken(tsharp_parser::PUBLIC, 0);
}

tree::TerminalNode* tsharp_parser::ConstructorContext::PRIVATE() {
  return getToken(tsharp_parser::PRIVATE, 0);
}

tsharp_parser::Constructor_bodyContext* tsharp_parser::ConstructorContext::constructor_body() {
  return getRuleContext<tsharp_parser::Constructor_bodyContext>(0);
}

std::vector<tsharp_parser::Function_argContext *> tsharp_parser::ConstructorContext::function_arg() {
  return getRuleContexts<tsharp_parser::Function_argContext>();
}

tsharp_parser::Function_argContext* tsharp_parser::ConstructorContext::function_arg(size_t i) {
  return getRuleContext<tsharp_parser::Function_argContext>(i);
}


size_t tsharp_parser::ConstructorContext::getRuleIndex() const {
  return tsharp_parser::RuleConstructor;
}

void tsharp_parser::ConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor(this);
}

void tsharp_parser::ConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor(this);
}


std::any tsharp_parser::ConstructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitConstructor(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::ConstructorContext* tsharp_parser::constructor() {
  ConstructorContext *_localctx = _tracker.createInstance<ConstructorContext>(_ctx, getState());
  enterRule(_localctx, 20, tsharp_parser::RuleConstructor);
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
    setState(175);
    antlrcpp::downCast<ConstructorContext *>(_localctx)->ACCESS_IDENTIFIER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == tsharp_parser::PUBLIC

    || _la == tsharp_parser::PRIVATE)) {
      antlrcpp::downCast<ConstructorContext *>(_localctx)->ACCESS_IDENTIFIER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(176);
    antlrcpp::downCast<ConstructorContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(177);
    match(tsharp_parser::OPEN_BRACKET);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67112704) != 0)) {
      setState(178);
      antlrcpp::downCast<ConstructorContext *>(_localctx)->function_argContext = function_arg();
      antlrcpp::downCast<ConstructorContext *>(_localctx)->ARGS.push_back(antlrcpp::downCast<ConstructorContext *>(_localctx)->function_argContext);
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(tsharp_parser::CLOSE_BRACKET);
    setState(185);
    match(tsharp_parser::OPEN_CURLY_BRACE);
    setState(187);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(186);
      constructor_body();
      break;
    }

    default:
      break;
    }
    setState(189);
    match(tsharp_parser::CLOSE_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_bodyContext ------------------------------------------------------------------

tsharp_parser::Constructor_bodyContext::Constructor_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tsharp_parser::Println_statementContext *> tsharp_parser::Constructor_bodyContext::println_statement() {
  return getRuleContexts<tsharp_parser::Println_statementContext>();
}

tsharp_parser::Println_statementContext* tsharp_parser::Constructor_bodyContext::println_statement(size_t i) {
  return getRuleContext<tsharp_parser::Println_statementContext>(i);
}

std::vector<tsharp_parser::Print_statementContext *> tsharp_parser::Constructor_bodyContext::print_statement() {
  return getRuleContexts<tsharp_parser::Print_statementContext>();
}

tsharp_parser::Print_statementContext* tsharp_parser::Constructor_bodyContext::print_statement(size_t i) {
  return getRuleContext<tsharp_parser::Print_statementContext>(i);
}

std::vector<tsharp_parser::AssignmentContext *> tsharp_parser::Constructor_bodyContext::assignment() {
  return getRuleContexts<tsharp_parser::AssignmentContext>();
}

tsharp_parser::AssignmentContext* tsharp_parser::Constructor_bodyContext::assignment(size_t i) {
  return getRuleContext<tsharp_parser::AssignmentContext>(i);
}

std::vector<tsharp_parser::Absolute_valueContext *> tsharp_parser::Constructor_bodyContext::absolute_value() {
  return getRuleContexts<tsharp_parser::Absolute_valueContext>();
}

tsharp_parser::Absolute_valueContext* tsharp_parser::Constructor_bodyContext::absolute_value(size_t i) {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(i);
}

std::vector<tsharp_parser::Square_rootContext *> tsharp_parser::Constructor_bodyContext::square_root() {
  return getRuleContexts<tsharp_parser::Square_rootContext>();
}

tsharp_parser::Square_rootContext* tsharp_parser::Constructor_bodyContext::square_root(size_t i) {
  return getRuleContext<tsharp_parser::Square_rootContext>(i);
}

std::vector<tsharp_parser::Exponent_fnContext *> tsharp_parser::Constructor_bodyContext::exponent_fn() {
  return getRuleContexts<tsharp_parser::Exponent_fnContext>();
}

tsharp_parser::Exponent_fnContext* tsharp_parser::Constructor_bodyContext::exponent_fn(size_t i) {
  return getRuleContext<tsharp_parser::Exponent_fnContext>(i);
}

std::vector<tsharp_parser::ExpressionContext *> tsharp_parser::Constructor_bodyContext::expression() {
  return getRuleContexts<tsharp_parser::ExpressionContext>();
}

tsharp_parser::ExpressionContext* tsharp_parser::Constructor_bodyContext::expression(size_t i) {
  return getRuleContext<tsharp_parser::ExpressionContext>(i);
}


size_t tsharp_parser::Constructor_bodyContext::getRuleIndex() const {
  return tsharp_parser::RuleConstructor_body;
}

void tsharp_parser::Constructor_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructor_body(this);
}

void tsharp_parser::Constructor_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructor_body(this);
}


std::any tsharp_parser::Constructor_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitConstructor_body(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Constructor_bodyContext* tsharp_parser::constructor_body() {
  Constructor_bodyContext *_localctx = _tracker.createInstance<Constructor_bodyContext>(_ctx, getState());
  enterRule(_localctx, 22, tsharp_parser::RuleConstructor_body);
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
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69144384) != 0)) {
      setState(198);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(191);
        println_statement();
        break;
      }

      case 2: {
        setState(192);
        print_statement();
        break;
      }

      case 3: {
        setState(193);
        assignment();
        break;
      }

      case 4: {
        setState(194);
        absolute_value();
        break;
      }

      case 5: {
        setState(195);
        square_root();
        break;
      }

      case 6: {
        setState(196);
        exponent_fn();
        break;
      }

      case 7: {
        setState(197);
        expression();
        break;
      }

      default:
        break;
      }
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_instContext ------------------------------------------------------------------

tsharp_parser::Object_instContext::Object_instContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Object_instContext::EQUALS() {
  return getToken(tsharp_parser::EQUALS, 0);
}

tree::TerminalNode* tsharp_parser::Object_instContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Object_instContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> tsharp_parser::Object_instContext::ID() {
  return getTokens(tsharp_parser::ID);
}

tree::TerminalNode* tsharp_parser::Object_instContext::ID(size_t i) {
  return getToken(tsharp_parser::ID, i);
}

std::vector<tsharp_parser::Func_call_argContext *> tsharp_parser::Object_instContext::func_call_arg() {
  return getRuleContexts<tsharp_parser::Func_call_argContext>();
}

tsharp_parser::Func_call_argContext* tsharp_parser::Object_instContext::func_call_arg(size_t i) {
  return getRuleContext<tsharp_parser::Func_call_argContext>(i);
}


size_t tsharp_parser::Object_instContext::getRuleIndex() const {
  return tsharp_parser::RuleObject_inst;
}

void tsharp_parser::Object_instContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_inst(this);
}

void tsharp_parser::Object_instContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_inst(this);
}


std::any tsharp_parser::Object_instContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitObject_inst(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Object_instContext* tsharp_parser::object_inst() {
  Object_instContext *_localctx = _tracker.createInstance<Object_instContext>(_ctx, getState());
  enterRule(_localctx, 24, tsharp_parser::RuleObject_inst);
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
    setState(203);
    antlrcpp::downCast<Object_instContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(204);
    antlrcpp::downCast<Object_instContext *>(_localctx)->VAR = match(tsharp_parser::ID);
    setState(205);
    match(tsharp_parser::EQUALS);
    setState(206);
    match(tsharp_parser::OPEN_BRACKET);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008730112) != 0)) {
      setState(207);
      antlrcpp::downCast<Object_instContext *>(_localctx)->func_call_argContext = func_call_arg();
      antlrcpp::downCast<Object_instContext *>(_localctx)->ARGS.push_back(antlrcpp::downCast<Object_instContext *>(_localctx)->func_call_argContext);
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

tsharp_parser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::AssignmentContext::EQUALS() {
  return getToken(tsharp_parser::EQUALS, 0);
}

tsharp_parser::Any_typeContext* tsharp_parser::AssignmentContext::any_type() {
  return getRuleContext<tsharp_parser::Any_typeContext>(0);
}

tree::TerminalNode* tsharp_parser::AssignmentContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tsharp_parser::Absolute_valueContext* tsharp_parser::AssignmentContext::absolute_value() {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(0);
}

tsharp_parser::Square_rootContext* tsharp_parser::AssignmentContext::square_root() {
  return getRuleContext<tsharp_parser::Square_rootContext>(0);
}

tree::TerminalNode* tsharp_parser::AssignmentContext::STRING_LIT() {
  return getToken(tsharp_parser::STRING_LIT, 0);
}

tree::TerminalNode* tsharp_parser::AssignmentContext::NUM() {
  return getToken(tsharp_parser::NUM, 0);
}

tree::TerminalNode* tsharp_parser::AssignmentContext::FLOAT_LIT() {
  return getToken(tsharp_parser::FLOAT_LIT, 0);
}

tree::TerminalNode* tsharp_parser::AssignmentContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}


size_t tsharp_parser::AssignmentContext::getRuleIndex() const {
  return tsharp_parser::RuleAssignment;
}

void tsharp_parser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void tsharp_parser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any tsharp_parser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::AssignmentContext* tsharp_parser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 26, tsharp_parser::RuleAssignment);
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
    setState(215);
    antlrcpp::downCast<AssignmentContext *>(_localctx)->TYPE = any_type();
    setState(216);
    antlrcpp::downCast<AssignmentContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(217);
    match(tsharp_parser::EQUALS);
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::PI:
      case tsharp_parser::NUM:
      case tsharp_parser::FLOAT_LIT:
      case tsharp_parser::STRING_LIT: {
        setState(218);
        antlrcpp::downCast<AssignmentContext *>(_localctx)->VALUE = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 941621248) != 0))) {
          antlrcpp::downCast<AssignmentContext *>(_localctx)->VALUE = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case tsharp_parser::SQRT: {
        setState(219);
        antlrcpp::downCast<AssignmentContext *>(_localctx)->SQUARE_ROOT = square_root();
        break;
      }

      case tsharp_parser::ABS: {
        setState(220);
        absolute_value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

tsharp_parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::ExpressionContext::EQUALS() {
  return getToken(tsharp_parser::EQUALS, 0);
}

std::vector<tree::TerminalNode *> tsharp_parser::ExpressionContext::ID() {
  return getTokens(tsharp_parser::ID);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::ID(size_t i) {
  return getToken(tsharp_parser::ID, i);
}

std::vector<tree::TerminalNode *> tsharp_parser::ExpressionContext::THIS() {
  return getTokens(tsharp_parser::THIS);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::THIS(size_t i) {
  return getToken(tsharp_parser::THIS, i);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::DOT() {
  return getToken(tsharp_parser::DOT, 0);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::NUM() {
  return getToken(tsharp_parser::NUM, 0);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::FLOAT_LIT() {
  return getToken(tsharp_parser::FLOAT_LIT, 0);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}

tsharp_parser::Square_rootContext* tsharp_parser::ExpressionContext::square_root() {
  return getRuleContext<tsharp_parser::Square_rootContext>(0);
}

tsharp_parser::Absolute_valueContext* tsharp_parser::ExpressionContext::absolute_value() {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(0);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::PLUS() {
  return getToken(tsharp_parser::PLUS, 0);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::MINUS() {
  return getToken(tsharp_parser::MINUS, 0);
}

tree::TerminalNode* tsharp_parser::ExpressionContext::STRING_LIT() {
  return getToken(tsharp_parser::STRING_LIT, 0);
}


size_t tsharp_parser::ExpressionContext::getRuleIndex() const {
  return tsharp_parser::RuleExpression;
}

void tsharp_parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void tsharp_parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any tsharp_parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::ExpressionContext* tsharp_parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, tsharp_parser::RuleExpression);
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
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tsharp_parser::THIS) {
      setState(223);
      match(tsharp_parser::THIS);
      setState(224);
      match(tsharp_parser::DOT);
    }
    setState(227);
    antlrcpp::downCast<ExpressionContext *>(_localctx)->NAME = match(tsharp_parser::ID);
    setState(228);
    match(tsharp_parser::EQUALS);
    setState(231);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(229);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->VAR = match(tsharp_parser::ID);
      setState(230);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->OP = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == tsharp_parser::PLUS

      || _la == tsharp_parser::MINUS)) {
        antlrcpp::downCast<ExpressionContext *>(_localctx)->OP = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::THIS: {
        setState(233);
        match(tsharp_parser::THIS);
        break;
      }

      case tsharp_parser::ID: {
        setState(234);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->VAR = match(tsharp_parser::ID);
        break;
      }

      case tsharp_parser::ABS:
      case tsharp_parser::SQRT:
      case tsharp_parser::PI:
      case tsharp_parser::NUM:
      case tsharp_parser::FLOAT_LIT:
      case tsharp_parser::STRING_LIT: {
        setState(241);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case tsharp_parser::STRING_LIT: {
            setState(235);
            antlrcpp::downCast<ExpressionContext *>(_localctx)->VALUE = match(tsharp_parser::STRING_LIT);
            break;
          }

          case tsharp_parser::NUM: {
            setState(236);
            match(tsharp_parser::NUM);
            break;
          }

          case tsharp_parser::FLOAT_LIT: {
            setState(237);
            match(tsharp_parser::FLOAT_LIT);
            break;
          }

          case tsharp_parser::PI: {
            setState(238);
            match(tsharp_parser::PI);
            break;
          }

          case tsharp_parser::SQRT: {
            setState(239);
            square_root();
            break;
          }

          case tsharp_parser::ABS: {
            setState(240);
            absolute_value();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

tsharp_parser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::TypeContext::INT() {
  return getToken(tsharp_parser::INT, 0);
}

tree::TerminalNode* tsharp_parser::TypeContext::STRING() {
  return getToken(tsharp_parser::STRING, 0);
}

tree::TerminalNode* tsharp_parser::TypeContext::FLOAT() {
  return getToken(tsharp_parser::FLOAT, 0);
}

tree::TerminalNode* tsharp_parser::TypeContext::VOID() {
  return getToken(tsharp_parser::VOID, 0);
}


size_t tsharp_parser::TypeContext::getRuleIndex() const {
  return tsharp_parser::RuleType;
}

void tsharp_parser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void tsharp_parser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any tsharp_parser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::TypeContext* tsharp_parser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, tsharp_parser::RuleType);
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
    setState(245);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3840) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Custom_typeContext ------------------------------------------------------------------

tsharp_parser::Custom_typeContext::Custom_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Custom_typeContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}


size_t tsharp_parser::Custom_typeContext::getRuleIndex() const {
  return tsharp_parser::RuleCustom_type;
}

void tsharp_parser::Custom_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustom_type(this);
}

void tsharp_parser::Custom_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustom_type(this);
}


std::any tsharp_parser::Custom_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitCustom_type(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Custom_typeContext* tsharp_parser::custom_type() {
  Custom_typeContext *_localctx = _tracker.createInstance<Custom_typeContext>(_ctx, getState());
  enterRule(_localctx, 32, tsharp_parser::RuleCustom_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(tsharp_parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Any_typeContext ------------------------------------------------------------------

tsharp_parser::Any_typeContext::Any_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tsharp_parser::TypeContext* tsharp_parser::Any_typeContext::type() {
  return getRuleContext<tsharp_parser::TypeContext>(0);
}

tsharp_parser::Custom_typeContext* tsharp_parser::Any_typeContext::custom_type() {
  return getRuleContext<tsharp_parser::Custom_typeContext>(0);
}


size_t tsharp_parser::Any_typeContext::getRuleIndex() const {
  return tsharp_parser::RuleAny_type;
}

void tsharp_parser::Any_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAny_type(this);
}

void tsharp_parser::Any_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAny_type(this);
}


std::any tsharp_parser::Any_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitAny_type(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Any_typeContext* tsharp_parser::any_type() {
  Any_typeContext *_localctx = _tracker.createInstance<Any_typeContext>(_ctx, getState());
  enterRule(_localctx, 34, tsharp_parser::RuleAny_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::INT:
      case tsharp_parser::FLOAT:
      case tsharp_parser::STRING:
      case tsharp_parser::VOID: {
        enterOuterAlt(_localctx, 1);
        setState(249);
        type();
        break;
      }

      case tsharp_parser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(250);
        custom_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

tsharp_parser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::If_statementContext::IF() {
  return getToken(tsharp_parser::IF, 0);
}

tree::TerminalNode* tsharp_parser::If_statementContext::EQUIVALENCE() {
  return getToken(tsharp_parser::EQUIVALENCE, 0);
}

tree::TerminalNode* tsharp_parser::If_statementContext::OPEN_CURLY_BRACE() {
  return getToken(tsharp_parser::OPEN_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::If_statementContext::CLOSE_CURLY_BRACE() {
  return getToken(tsharp_parser::CLOSE_CURLY_BRACE, 0);
}

tsharp_parser::Func_bodyContext* tsharp_parser::If_statementContext::func_body() {
  return getRuleContext<tsharp_parser::Func_bodyContext>(0);
}

std::vector<tree::TerminalNode *> tsharp_parser::If_statementContext::STRING_LIT() {
  return getTokens(tsharp_parser::STRING_LIT);
}

tree::TerminalNode* tsharp_parser::If_statementContext::STRING_LIT(size_t i) {
  return getToken(tsharp_parser::STRING_LIT, i);
}

std::vector<tree::TerminalNode *> tsharp_parser::If_statementContext::FLOAT_LIT() {
  return getTokens(tsharp_parser::FLOAT_LIT);
}

tree::TerminalNode* tsharp_parser::If_statementContext::FLOAT_LIT(size_t i) {
  return getToken(tsharp_parser::FLOAT_LIT, i);
}

std::vector<tree::TerminalNode *> tsharp_parser::If_statementContext::NUM() {
  return getTokens(tsharp_parser::NUM);
}

tree::TerminalNode* tsharp_parser::If_statementContext::NUM(size_t i) {
  return getToken(tsharp_parser::NUM, i);
}

std::vector<tree::TerminalNode *> tsharp_parser::If_statementContext::ID() {
  return getTokens(tsharp_parser::ID);
}

tree::TerminalNode* tsharp_parser::If_statementContext::ID(size_t i) {
  return getToken(tsharp_parser::ID, i);
}


size_t tsharp_parser::If_statementContext::getRuleIndex() const {
  return tsharp_parser::RuleIf_statement;
}

void tsharp_parser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void tsharp_parser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any tsharp_parser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::If_statementContext* tsharp_parser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 36, tsharp_parser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(tsharp_parser::IF);
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::ID: {
        setState(254);
        antlrcpp::downCast<If_statementContext *>(_localctx)->LHS = match(tsharp_parser::ID);
        break;
      }

      case tsharp_parser::STRING_LIT: {
        setState(255);
        match(tsharp_parser::STRING_LIT);
        break;
      }

      case tsharp_parser::FLOAT_LIT: {
        setState(256);
        match(tsharp_parser::FLOAT_LIT);
        break;
      }

      case tsharp_parser::NUM: {
        setState(257);
        match(tsharp_parser::NUM);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(260);
    match(tsharp_parser::EQUIVALENCE);
    setState(265);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::ID: {
        setState(261);
        antlrcpp::downCast<If_statementContext *>(_localctx)->RHS = match(tsharp_parser::ID);
        break;
      }

      case tsharp_parser::STRING_LIT: {
        setState(262);
        match(tsharp_parser::STRING_LIT);
        break;
      }

      case tsharp_parser::FLOAT_LIT: {
        setState(263);
        match(tsharp_parser::FLOAT_LIT);
        break;
      }

      case tsharp_parser::NUM: {
        setState(264);
        match(tsharp_parser::NUM);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(267);
    match(tsharp_parser::OPEN_CURLY_BRACE);
    setState(268);
    antlrcpp::downCast<If_statementContext *>(_localctx)->BODY = func_body();
    setState(269);
    match(tsharp_parser::CLOSE_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_if_statementContext ------------------------------------------------------------------

tsharp_parser::Else_if_statementContext::Else_if_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Else_if_statementContext::ELSE() {
  return getToken(tsharp_parser::ELSE, 0);
}

tsharp_parser::If_statementContext* tsharp_parser::Else_if_statementContext::if_statement() {
  return getRuleContext<tsharp_parser::If_statementContext>(0);
}


size_t tsharp_parser::Else_if_statementContext::getRuleIndex() const {
  return tsharp_parser::RuleElse_if_statement;
}

void tsharp_parser::Else_if_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_if_statement(this);
}

void tsharp_parser::Else_if_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_if_statement(this);
}


std::any tsharp_parser::Else_if_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitElse_if_statement(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Else_if_statementContext* tsharp_parser::else_if_statement() {
  Else_if_statementContext *_localctx = _tracker.createInstance<Else_if_statementContext>(_ctx, getState());
  enterRule(_localctx, 38, tsharp_parser::RuleElse_if_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(tsharp_parser::ELSE);
    setState(272);
    if_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statementContext ------------------------------------------------------------------

tsharp_parser::Else_statementContext::Else_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Else_statementContext::ELSE() {
  return getToken(tsharp_parser::ELSE, 0);
}

tree::TerminalNode* tsharp_parser::Else_statementContext::OPEN_CURLY_BRACE() {
  return getToken(tsharp_parser::OPEN_CURLY_BRACE, 0);
}

tree::TerminalNode* tsharp_parser::Else_statementContext::CLOSE_CURLY_BRACE() {
  return getToken(tsharp_parser::CLOSE_CURLY_BRACE, 0);
}

tsharp_parser::Func_bodyContext* tsharp_parser::Else_statementContext::func_body() {
  return getRuleContext<tsharp_parser::Func_bodyContext>(0);
}


size_t tsharp_parser::Else_statementContext::getRuleIndex() const {
  return tsharp_parser::RuleElse_statement;
}

void tsharp_parser::Else_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_statement(this);
}

void tsharp_parser::Else_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_statement(this);
}


std::any tsharp_parser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Else_statementContext* tsharp_parser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
  enterRule(_localctx, 40, tsharp_parser::RuleElse_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(tsharp_parser::ELSE);
    setState(275);
    match(tsharp_parser::OPEN_CURLY_BRACE);
    setState(276);
    antlrcpp::downCast<Else_statementContext *>(_localctx)->BODY = func_body();
    setState(277);
    match(tsharp_parser::CLOSE_CURLY_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pi_constantContext ------------------------------------------------------------------

tsharp_parser::Pi_constantContext::Pi_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Pi_constantContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}


size_t tsharp_parser::Pi_constantContext::getRuleIndex() const {
  return tsharp_parser::RulePi_constant;
}

void tsharp_parser::Pi_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPi_constant(this);
}

void tsharp_parser::Pi_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPi_constant(this);
}


std::any tsharp_parser::Pi_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitPi_constant(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Pi_constantContext* tsharp_parser::pi_constant() {
  Pi_constantContext *_localctx = _tracker.createInstance<Pi_constantContext>(_ctx, getState());
  enterRule(_localctx, 42, tsharp_parser::RulePi_constant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(tsharp_parser::PI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Absolute_valueContext ------------------------------------------------------------------

tsharp_parser::Absolute_valueContext::Absolute_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Absolute_valueContext::ABS() {
  return getToken(tsharp_parser::ABS, 0);
}

tree::TerminalNode* tsharp_parser::Absolute_valueContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Absolute_valueContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Absolute_valueContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::Absolute_valueContext::NUM() {
  return getToken(tsharp_parser::NUM, 0);
}

tree::TerminalNode* tsharp_parser::Absolute_valueContext::FLOAT_LIT() {
  return getToken(tsharp_parser::FLOAT_LIT, 0);
}


size_t tsharp_parser::Absolute_valueContext::getRuleIndex() const {
  return tsharp_parser::RuleAbsolute_value;
}

void tsharp_parser::Absolute_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbsolute_value(this);
}

void tsharp_parser::Absolute_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbsolute_value(this);
}


std::any tsharp_parser::Absolute_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitAbsolute_value(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Absolute_valueContext* tsharp_parser::absolute_value() {
  Absolute_valueContext *_localctx = _tracker.createInstance<Absolute_valueContext>(_ctx, getState());
  enterRule(_localctx, 44, tsharp_parser::RuleAbsolute_value);
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
    setState(281);
    match(tsharp_parser::ABS);
    setState(282);
    match(tsharp_parser::OPEN_BRACKET);
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::NUM:
      case tsharp_parser::FLOAT_LIT: {
        setState(283);
        antlrcpp::downCast<Absolute_valueContext *>(_localctx)->NUMBER = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == tsharp_parser::NUM

        || _la == tsharp_parser::FLOAT_LIT)) {
          antlrcpp::downCast<Absolute_valueContext *>(_localctx)->NUMBER = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case tsharp_parser::ID: {
        setState(284);
        antlrcpp::downCast<Absolute_valueContext *>(_localctx)->VAR = match(tsharp_parser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(287);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Square_rootContext ------------------------------------------------------------------

tsharp_parser::Square_rootContext::Square_rootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Square_rootContext::SQRT() {
  return getToken(tsharp_parser::SQRT, 0);
}

tree::TerminalNode* tsharp_parser::Square_rootContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Square_rootContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Square_rootContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tree::TerminalNode* tsharp_parser::Square_rootContext::NUM() {
  return getToken(tsharp_parser::NUM, 0);
}

tree::TerminalNode* tsharp_parser::Square_rootContext::FLOAT_LIT() {
  return getToken(tsharp_parser::FLOAT_LIT, 0);
}


size_t tsharp_parser::Square_rootContext::getRuleIndex() const {
  return tsharp_parser::RuleSquare_root;
}

void tsharp_parser::Square_rootContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSquare_root(this);
}

void tsharp_parser::Square_rootContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSquare_root(this);
}


std::any tsharp_parser::Square_rootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitSquare_root(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Square_rootContext* tsharp_parser::square_root() {
  Square_rootContext *_localctx = _tracker.createInstance<Square_rootContext>(_ctx, getState());
  enterRule(_localctx, 46, tsharp_parser::RuleSquare_root);
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
    setState(289);
    match(tsharp_parser::SQRT);
    setState(290);
    match(tsharp_parser::OPEN_BRACKET);
    setState(293);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::NUM:
      case tsharp_parser::FLOAT_LIT: {
        setState(291);
        antlrcpp::downCast<Square_rootContext *>(_localctx)->NUMBER = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == tsharp_parser::NUM

        || _la == tsharp_parser::FLOAT_LIT)) {
          antlrcpp::downCast<Square_rootContext *>(_localctx)->NUMBER = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case tsharp_parser::ID: {
        setState(292);
        antlrcpp::downCast<Square_rootContext *>(_localctx)->VAR = match(tsharp_parser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(295);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exponent_fnContext ------------------------------------------------------------------

tsharp_parser::Exponent_fnContext::Exponent_fnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Exponent_fnContext::EXP() {
  return getToken(tsharp_parser::EXP, 0);
}

tree::TerminalNode* tsharp_parser::Exponent_fnContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Exponent_fnContext::COMMA() {
  return getToken(tsharp_parser::COMMA, 0);
}

tree::TerminalNode* tsharp_parser::Exponent_fnContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> tsharp_parser::Exponent_fnContext::NUM() {
  return getTokens(tsharp_parser::NUM);
}

tree::TerminalNode* tsharp_parser::Exponent_fnContext::NUM(size_t i) {
  return getToken(tsharp_parser::NUM, i);
}

std::vector<tree::TerminalNode *> tsharp_parser::Exponent_fnContext::ID() {
  return getTokens(tsharp_parser::ID);
}

tree::TerminalNode* tsharp_parser::Exponent_fnContext::ID(size_t i) {
  return getToken(tsharp_parser::ID, i);
}


size_t tsharp_parser::Exponent_fnContext::getRuleIndex() const {
  return tsharp_parser::RuleExponent_fn;
}

void tsharp_parser::Exponent_fnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExponent_fn(this);
}

void tsharp_parser::Exponent_fnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExponent_fn(this);
}


std::any tsharp_parser::Exponent_fnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitExponent_fn(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Exponent_fnContext* tsharp_parser::exponent_fn() {
  Exponent_fnContext *_localctx = _tracker.createInstance<Exponent_fnContext>(_ctx, getState());
  enterRule(_localctx, 48, tsharp_parser::RuleExponent_fn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(tsharp_parser::EXP);
    setState(298);
    match(tsharp_parser::OPEN_BRACKET);
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::NUM: {
        setState(299);
        antlrcpp::downCast<Exponent_fnContext *>(_localctx)->NUMBER_BASE = match(tsharp_parser::NUM);
        break;
      }

      case tsharp_parser::ID: {
        setState(300);
        antlrcpp::downCast<Exponent_fnContext *>(_localctx)->VAR_BASE = match(tsharp_parser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(303);
    match(tsharp_parser::COMMA);
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tsharp_parser::NUM: {
        setState(304);
        antlrcpp::downCast<Exponent_fnContext *>(_localctx)->NUMBER_EXP = match(tsharp_parser::NUM);
        break;
      }

      case tsharp_parser::ID: {
        setState(305);
        antlrcpp::downCast<Exponent_fnContext *>(_localctx)->VAR_EXP = match(tsharp_parser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(308);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Println_statementContext ------------------------------------------------------------------

tsharp_parser::Println_statementContext::Println_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Println_statementContext::PRINTLN() {
  return getToken(tsharp_parser::PRINTLN, 0);
}

std::vector<tree::TerminalNode *> tsharp_parser::Println_statementContext::OPEN_BRACKET() {
  return getTokens(tsharp_parser::OPEN_BRACKET);
}

tree::TerminalNode* tsharp_parser::Println_statementContext::OPEN_BRACKET(size_t i) {
  return getToken(tsharp_parser::OPEN_BRACKET, i);
}

std::vector<tree::TerminalNode *> tsharp_parser::Println_statementContext::CLOSE_BRACKET() {
  return getTokens(tsharp_parser::CLOSE_BRACKET);
}

tree::TerminalNode* tsharp_parser::Println_statementContext::CLOSE_BRACKET(size_t i) {
  return getToken(tsharp_parser::CLOSE_BRACKET, i);
}

tsharp_parser::Absolute_valueContext* tsharp_parser::Println_statementContext::absolute_value() {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(0);
}

tsharp_parser::Func_callContext* tsharp_parser::Println_statementContext::func_call() {
  return getRuleContext<tsharp_parser::Func_callContext>(0);
}

tree::TerminalNode* tsharp_parser::Println_statementContext::STRING_LIT() {
  return getToken(tsharp_parser::STRING_LIT, 0);
}

std::vector<tree::TerminalNode *> tsharp_parser::Println_statementContext::ID() {
  return getTokens(tsharp_parser::ID);
}

tree::TerminalNode* tsharp_parser::Println_statementContext::ID(size_t i) {
  return getToken(tsharp_parser::ID, i);
}

tsharp_parser::Square_rootContext* tsharp_parser::Println_statementContext::square_root() {
  return getRuleContext<tsharp_parser::Square_rootContext>(0);
}

tree::TerminalNode* tsharp_parser::Println_statementContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}

tree::TerminalNode* tsharp_parser::Println_statementContext::DOT() {
  return getToken(tsharp_parser::DOT, 0);
}

std::vector<tsharp_parser::Func_call_argContext *> tsharp_parser::Println_statementContext::func_call_arg() {
  return getRuleContexts<tsharp_parser::Func_call_argContext>();
}

tsharp_parser::Func_call_argContext* tsharp_parser::Println_statementContext::func_call_arg(size_t i) {
  return getRuleContext<tsharp_parser::Func_call_argContext>(i);
}


size_t tsharp_parser::Println_statementContext::getRuleIndex() const {
  return tsharp_parser::RulePrintln_statement;
}

void tsharp_parser::Println_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintln_statement(this);
}

void tsharp_parser::Println_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintln_statement(this);
}


std::any tsharp_parser::Println_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitPrintln_statement(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Println_statementContext* tsharp_parser::println_statement() {
  Println_statementContext *_localctx = _tracker.createInstance<Println_statementContext>(_ctx, getState());
  enterRule(_localctx, 50, tsharp_parser::RulePrintln_statement);
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
    setState(310);
    match(tsharp_parser::PRINTLN);
    setState(311);
    match(tsharp_parser::OPEN_BRACKET);
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(312);
      antlrcpp::downCast<Println_statementContext *>(_localctx)->MESSAGE = match(tsharp_parser::STRING_LIT);
      break;
    }

    case 2: {
      setState(313);
      antlrcpp::downCast<Println_statementContext *>(_localctx)->VAR = match(tsharp_parser::ID);
      break;
    }

    case 3: {
      setState(314);
      antlrcpp::downCast<Println_statementContext *>(_localctx)->SQUARE_ROOT = square_root();
      break;
    }

    case 4: {
      setState(315);
      absolute_value();
      break;
    }

    case 5: {
      setState(316);
      antlrcpp::downCast<Println_statementContext *>(_localctx)->PI_CONST = match(tsharp_parser::PI);
      break;
    }

    case 6: {
      setState(317);
      func_call();
      break;
    }

    case 7: {
      setState(318);
      antlrcpp::downCast<Println_statementContext *>(_localctx)->OBJ_NAME = match(tsharp_parser::ID);
      setState(319);
      match(tsharp_parser::DOT);
      setState(320);
      antlrcpp::downCast<Println_statementContext *>(_localctx)->PROPERTY_NAME = match(tsharp_parser::ID);
      setState(321);
      match(tsharp_parser::OPEN_BRACKET);
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1008730112) != 0)) {
        setState(322);
        antlrcpp::downCast<Println_statementContext *>(_localctx)->func_call_argContext = func_call_arg();
        antlrcpp::downCast<Println_statementContext *>(_localctx)->ARGS.push_back(antlrcpp::downCast<Println_statementContext *>(_localctx)->func_call_argContext);
        setState(327);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(328);
      match(tsharp_parser::CLOSE_BRACKET);
      break;
    }

    default:
      break;
    }
    setState(331);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_statementContext ------------------------------------------------------------------

tsharp_parser::Print_statementContext::Print_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tsharp_parser::Print_statementContext::PRINT() {
  return getToken(tsharp_parser::PRINT, 0);
}

tree::TerminalNode* tsharp_parser::Print_statementContext::OPEN_BRACKET() {
  return getToken(tsharp_parser::OPEN_BRACKET, 0);
}

tree::TerminalNode* tsharp_parser::Print_statementContext::CLOSE_BRACKET() {
  return getToken(tsharp_parser::CLOSE_BRACKET, 0);
}

tsharp_parser::Absolute_valueContext* tsharp_parser::Print_statementContext::absolute_value() {
  return getRuleContext<tsharp_parser::Absolute_valueContext>(0);
}

tsharp_parser::Func_callContext* tsharp_parser::Print_statementContext::func_call() {
  return getRuleContext<tsharp_parser::Func_callContext>(0);
}

tree::TerminalNode* tsharp_parser::Print_statementContext::STRING_LIT() {
  return getToken(tsharp_parser::STRING_LIT, 0);
}

tree::TerminalNode* tsharp_parser::Print_statementContext::ID() {
  return getToken(tsharp_parser::ID, 0);
}

tsharp_parser::Square_rootContext* tsharp_parser::Print_statementContext::square_root() {
  return getRuleContext<tsharp_parser::Square_rootContext>(0);
}

tree::TerminalNode* tsharp_parser::Print_statementContext::PI() {
  return getToken(tsharp_parser::PI, 0);
}


size_t tsharp_parser::Print_statementContext::getRuleIndex() const {
  return tsharp_parser::RulePrint_statement;
}

void tsharp_parser::Print_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_statement(this);
}

void tsharp_parser::Print_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tsharp_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_statement(this);
}


std::any tsharp_parser::Print_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tsharp_parserVisitor*>(visitor))
    return parserVisitor->visitPrint_statement(this);
  else
    return visitor->visitChildren(this);
}

tsharp_parser::Print_statementContext* tsharp_parser::print_statement() {
  Print_statementContext *_localctx = _tracker.createInstance<Print_statementContext>(_ctx, getState());
  enterRule(_localctx, 52, tsharp_parser::RulePrint_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(tsharp_parser::PRINT);
    setState(334);
    match(tsharp_parser::OPEN_BRACKET);
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(335);
      antlrcpp::downCast<Print_statementContext *>(_localctx)->MESSAGE = match(tsharp_parser::STRING_LIT);
      break;
    }

    case 2: {
      setState(336);
      antlrcpp::downCast<Print_statementContext *>(_localctx)->VAR = match(tsharp_parser::ID);
      break;
    }

    case 3: {
      setState(337);
      antlrcpp::downCast<Print_statementContext *>(_localctx)->SQUARE_ROOT = square_root();
      break;
    }

    case 4: {
      setState(338);
      absolute_value();
      break;
    }

    case 5: {
      setState(339);
      antlrcpp::downCast<Print_statementContext *>(_localctx)->PI_CONST = match(tsharp_parser::PI);
      break;
    }

    case 6: {
      setState(340);
      func_call();
      break;
    }

    default:
      break;
    }
    setState(343);
    match(tsharp_parser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void tsharp_parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tsharp_parserParserInitialize();
#else
  ::antlr4::internal::call_once(tsharp_parserParserOnceFlag, tsharp_parserParserInitialize);
#endif
}
