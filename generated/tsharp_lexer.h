
// Generated from tsharp_lexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  tsharp_lexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, COMMENT = 2, CLASS = 3, PUBLIC = 4, PRIVATE = 5, THIS = 6, DOT = 7, 
    INT = 8, FLOAT = 9, STRING = 10, VOID = 11, MAIN = 12, IF = 13, ELSE = 14, 
    EQUIVALENCE = 15, PRINTLN = 16, PRINT = 17, ABS = 18, SQRT = 19, EXP = 20, 
    PI = 21, RETURN = 22, COMMA = 23, PLUS = 24, MINUS = 25, ID = 26, NUM = 27, 
    FLOAT_LIT = 28, STRING_LIT = 29, EQUALS = 30, OPEN_BRACKET = 31, CLOSE_BRACKET = 32, 
    OPEN_CURLY_BRACE = 33, CLOSE_CURLY_BRACE = 34
  };

  explicit tsharp_lexer(antlr4::CharStream *input);

  ~tsharp_lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

