
// Generated from tsharp_parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  tsharp_parser : public antlr4::Parser {
public:
  enum {
    WS = 1, COMMENT = 2, CLASS = 3, PUBLIC = 4, PRIVATE = 5, THIS = 6, DOT = 7, 
    INT = 8, FLOAT = 9, STRING = 10, VOID = 11, MAIN = 12, IF = 13, ELSE = 14, 
    EQUIVALENCE = 15, PRINTLN = 16, PRINT = 17, ABS = 18, SQRT = 19, EXP = 20, 
    PI = 21, RETURN = 22, COMMA = 23, PLUS = 24, MINUS = 25, ID = 26, NUM = 27, 
    FLOAT_LIT = 28, STRING_LIT = 29, EQUALS = 30, OPEN_BRACKET = 31, CLOSE_BRACKET = 32, 
    OPEN_CURLY_BRACE = 33, CLOSE_CURLY_BRACE = 34
  };

  enum {
    RuleProgram = 0, RuleMain_function = 1, RuleFunction = 2, RuleFunction_arg = 3, 
    RuleFunc_body = 4, RuleFunc_call = 5, RuleFunc_call_arg = 6, RuleReturn_statement = 7, 
    RuleClass = 8, RuleField = 9, RuleConstructor = 10, RuleConstructor_body = 11, 
    RuleObject_inst = 12, RuleAssignment = 13, RuleExpression = 14, RuleType = 15, 
    RuleCustom_type = 16, RuleAny_type = 17, RuleIf_statement = 18, RuleElse_if_statement = 19, 
    RuleElse_statement = 20, RulePi_constant = 21, RuleAbsolute_value = 22, 
    RuleSquare_root = 23, RuleExponent_fn = 24, RulePrintln_statement = 25, 
    RulePrint_statement = 26
  };

  explicit tsharp_parser(antlr4::TokenStream *input);

  tsharp_parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~tsharp_parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class Main_functionContext;
  class FunctionContext;
  class Function_argContext;
  class Func_bodyContext;
  class Func_callContext;
  class Func_call_argContext;
  class Return_statementContext;
  class ClassContext;
  class FieldContext;
  class ConstructorContext;
  class Constructor_bodyContext;
  class Object_instContext;
  class AssignmentContext;
  class ExpressionContext;
  class TypeContext;
  class Custom_typeContext;
  class Any_typeContext;
  class If_statementContext;
  class Else_if_statementContext;
  class Else_statementContext;
  class Pi_constantContext;
  class Absolute_valueContext;
  class Square_rootContext;
  class Exponent_fnContext;
  class Println_statementContext;
  class Print_statementContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Main_functionContext *main_function();
    antlr4::tree::TerminalNode *EOF();
    std::vector<ClassContext *> class_();
    ClassContext* class_(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Main_functionContext : public antlr4::ParserRuleContext {
  public:
    Main_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *MAIN();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_CURLY_BRACE();
    antlr4::tree::TerminalNode *CLOSE_CURLY_BRACE();
    std::vector<Println_statementContext *> println_statement();
    Println_statementContext* println_statement(size_t i);
    std::vector<Print_statementContext *> print_statement();
    Print_statementContext* print_statement(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<Absolute_valueContext *> absolute_value();
    Absolute_valueContext* absolute_value(size_t i);
    std::vector<Square_rootContext *> square_root();
    Square_rootContext* square_root(size_t i);
    std::vector<Exponent_fnContext *> exponent_fn();
    Exponent_fnContext* exponent_fn(size_t i);
    std::vector<Func_callContext *> func_call();
    Func_callContext* func_call(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Object_instContext *> object_inst();
    Object_instContext* object_inst(size_t i);
    std::vector<If_statementContext *> if_statement();
    If_statementContext* if_statement(size_t i);
    std::vector<Else_if_statementContext *> else_if_statement();
    Else_if_statementContext* else_if_statement(size_t i);
    std::vector<Else_statementContext *> else_statement();
    Else_statementContext* else_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Main_functionContext* main_function();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    tsharp_parser::Any_typeContext *TYPE = nullptr;
    antlr4::Token *NAME = nullptr;
    tsharp_parser::Function_argContext *function_argContext = nullptr;
    std::vector<Function_argContext *> ARGS;
    tsharp_parser::Func_bodyContext *BODY = nullptr;
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_CURLY_BRACE();
    antlr4::tree::TerminalNode *CLOSE_CURLY_BRACE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    Any_typeContext *any_type();
    antlr4::tree::TerminalNode *ID();
    Func_bodyContext *func_body();
    std::vector<Function_argContext *> function_arg();
    Function_argContext* function_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  Function_argContext : public antlr4::ParserRuleContext {
  public:
    tsharp_parser::Any_typeContext *TYPE = nullptr;
    antlr4::Token *NAME = nullptr;
    Function_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_typeContext *any_type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_argContext* function_arg();

  class  Func_bodyContext : public antlr4::ParserRuleContext {
  public:
    Func_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Println_statementContext *> println_statement();
    Println_statementContext* println_statement(size_t i);
    std::vector<Print_statementContext *> print_statement();
    Print_statementContext* print_statement(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<Absolute_valueContext *> absolute_value();
    Absolute_valueContext* absolute_value(size_t i);
    std::vector<Square_rootContext *> square_root();
    Square_rootContext* square_root(size_t i);
    std::vector<Exponent_fnContext *> exponent_fn();
    Exponent_fnContext* exponent_fn(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Return_statementContext *return_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_bodyContext* func_body();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NAME = nullptr;
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *ID();
    std::vector<Func_call_argContext *> func_call_arg();
    Func_call_argContext* func_call_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_callContext* func_call();

  class  Func_call_argContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *VALUE = nullptr;
    Func_call_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *FLOAT_LIT();
    antlr4::tree::TerminalNode *STRING_LIT();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_call_argContext* func_call_arg();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *VAL = nullptr;
    antlr4::Token *OBJ_NAME = nullptr;
    tsharp_parser::Func_callContext *PROPERTY_NAME = nullptr;
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *FLOAT_LIT();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *DOT();
    Func_callContext *func_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  ClassContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NAME = nullptr;
    tsharp_parser::FieldContext *fieldContext = nullptr;
    std::vector<FieldContext *> FIELDS;
    tsharp_parser::ConstructorContext *constructorContext = nullptr;
    std::vector<ConstructorContext *> CONSTRUCTORS;
    tsharp_parser::FunctionContext *functionContext = nullptr;
    std::vector<FunctionContext *> METHODS;
    ClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *OPEN_CURLY_BRACE();
    antlr4::tree::TerminalNode *CLOSE_CURLY_BRACE();
    antlr4::tree::TerminalNode *ID();
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<ConstructorContext *> constructor();
    ConstructorContext* constructor(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassContext* class_();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ACCESS_IDENTIFIER = nullptr;
    tsharp_parser::Any_typeContext *TYPE = nullptr;
    antlr4::Token *NAME = nullptr;
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_typeContext *any_type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  ConstructorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ACCESS_IDENTIFIER = nullptr;
    antlr4::Token *NAME = nullptr;
    tsharp_parser::Function_argContext *function_argContext = nullptr;
    std::vector<Function_argContext *> ARGS;
    ConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_CURLY_BRACE();
    antlr4::tree::TerminalNode *CLOSE_CURLY_BRACE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    Constructor_bodyContext *constructor_body();
    std::vector<Function_argContext *> function_arg();
    Function_argContext* function_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorContext* constructor();

  class  Constructor_bodyContext : public antlr4::ParserRuleContext {
  public:
    Constructor_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Println_statementContext *> println_statement();
    Println_statementContext* println_statement(size_t i);
    std::vector<Print_statementContext *> print_statement();
    Print_statementContext* print_statement(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<Absolute_valueContext *> absolute_value();
    Absolute_valueContext* absolute_value(size_t i);
    std::vector<Square_rootContext *> square_root();
    Square_rootContext* square_root(size_t i);
    std::vector<Exponent_fnContext *> exponent_fn();
    Exponent_fnContext* exponent_fn(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constructor_bodyContext* constructor_body();

  class  Object_instContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NAME = nullptr;
    antlr4::Token *VAR = nullptr;
    tsharp_parser::Func_call_argContext *func_call_argContext = nullptr;
    std::vector<Func_call_argContext *> ARGS;
    Object_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<Func_call_argContext *> func_call_arg();
    Func_call_argContext* func_call_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_instContext* object_inst();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    tsharp_parser::Any_typeContext *TYPE = nullptr;
    antlr4::Token *NAME = nullptr;
    antlr4::Token *VALUE = nullptr;
    tsharp_parser::Square_rootContext *SQUARE_ROOT = nullptr;
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUALS();
    Any_typeContext *any_type();
    antlr4::tree::TerminalNode *ID();
    Absolute_valueContext *absolute_value();
    Square_rootContext *square_root();
    antlr4::tree::TerminalNode *STRING_LIT();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *FLOAT_LIT();
    antlr4::tree::TerminalNode *PI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NAME = nullptr;
    antlr4::Token *VAR = nullptr;
    antlr4::Token *OP = nullptr;
    antlr4::Token *VALUE = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUALS();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THIS();
    antlr4::tree::TerminalNode* THIS(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *FLOAT_LIT();
    antlr4::tree::TerminalNode *PI();
    Square_rootContext *square_root();
    Absolute_valueContext *absolute_value();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STRING_LIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Custom_typeContext : public antlr4::ParserRuleContext {
  public:
    Custom_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Custom_typeContext* custom_type();

  class  Any_typeContext : public antlr4::ParserRuleContext {
  public:
    Any_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    Custom_typeContext *custom_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_typeContext* any_type();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *LHS = nullptr;
    antlr4::Token *RHS = nullptr;
    tsharp_parser::Func_bodyContext *BODY = nullptr;
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EQUIVALENCE();
    antlr4::tree::TerminalNode *OPEN_CURLY_BRACE();
    antlr4::tree::TerminalNode *CLOSE_CURLY_BRACE();
    Func_bodyContext *func_body();
    std::vector<antlr4::tree::TerminalNode *> STRING_LIT();
    antlr4::tree::TerminalNode* STRING_LIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLOAT_LIT();
    antlr4::tree::TerminalNode* FLOAT_LIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Else_if_statementContext : public antlr4::ParserRuleContext {
  public:
    Else_if_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    If_statementContext *if_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_if_statementContext* else_if_statement();

  class  Else_statementContext : public antlr4::ParserRuleContext {
  public:
    tsharp_parser::Func_bodyContext *BODY = nullptr;
    Else_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *OPEN_CURLY_BRACE();
    antlr4::tree::TerminalNode *CLOSE_CURLY_BRACE();
    Func_bodyContext *func_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_statementContext* else_statement();

  class  Pi_constantContext : public antlr4::ParserRuleContext {
  public:
    Pi_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pi_constantContext* pi_constant();

  class  Absolute_valueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NUMBER = nullptr;
    antlr4::Token *VAR = nullptr;
    Absolute_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *FLOAT_LIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Absolute_valueContext* absolute_value();

  class  Square_rootContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NUMBER = nullptr;
    antlr4::Token *VAR = nullptr;
    Square_rootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *FLOAT_LIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Square_rootContext* square_root();

  class  Exponent_fnContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NUMBER_BASE = nullptr;
    antlr4::Token *VAR_BASE = nullptr;
    antlr4::Token *NUMBER_EXP = nullptr;
    antlr4::Token *VAR_EXP = nullptr;
    Exponent_fnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exponent_fnContext* exponent_fn();

  class  Println_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *MESSAGE = nullptr;
    antlr4::Token *VAR = nullptr;
    tsharp_parser::Square_rootContext *SQUARE_ROOT = nullptr;
    antlr4::Token *PI_CONST = nullptr;
    antlr4::Token *OBJ_NAME = nullptr;
    antlr4::Token *PROPERTY_NAME = nullptr;
    tsharp_parser::Func_call_argContext *func_call_argContext = nullptr;
    std::vector<Func_call_argContext *> ARGS;
    Println_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINTLN();
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);
    Absolute_valueContext *absolute_value();
    Func_callContext *func_call();
    antlr4::tree::TerminalNode *STRING_LIT();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    Square_rootContext *square_root();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Func_call_argContext *> func_call_arg();
    Func_call_argContext* func_call_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Println_statementContext* println_statement();

  class  Print_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *MESSAGE = nullptr;
    antlr4::Token *VAR = nullptr;
    tsharp_parser::Square_rootContext *SQUARE_ROOT = nullptr;
    antlr4::Token *PI_CONST = nullptr;
    Print_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    Absolute_valueContext *absolute_value();
    Func_callContext *func_call();
    antlr4::tree::TerminalNode *STRING_LIT();
    antlr4::tree::TerminalNode *ID();
    Square_rootContext *square_root();
    antlr4::tree::TerminalNode *PI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_statementContext* print_statement();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

