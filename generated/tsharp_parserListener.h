
// Generated from tsharp_parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "tsharp_parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by tsharp_parser.
 */
class  tsharp_parserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(tsharp_parser::ProgramContext *ctx) = 0;
  virtual void exitProgram(tsharp_parser::ProgramContext *ctx) = 0;

  virtual void enterMain_function(tsharp_parser::Main_functionContext *ctx) = 0;
  virtual void exitMain_function(tsharp_parser::Main_functionContext *ctx) = 0;

  virtual void enterFunction(tsharp_parser::FunctionContext *ctx) = 0;
  virtual void exitFunction(tsharp_parser::FunctionContext *ctx) = 0;

  virtual void enterFunction_arg(tsharp_parser::Function_argContext *ctx) = 0;
  virtual void exitFunction_arg(tsharp_parser::Function_argContext *ctx) = 0;

  virtual void enterFunc_body(tsharp_parser::Func_bodyContext *ctx) = 0;
  virtual void exitFunc_body(tsharp_parser::Func_bodyContext *ctx) = 0;

  virtual void enterFunc_call(tsharp_parser::Func_callContext *ctx) = 0;
  virtual void exitFunc_call(tsharp_parser::Func_callContext *ctx) = 0;

  virtual void enterFunc_call_arg(tsharp_parser::Func_call_argContext *ctx) = 0;
  virtual void exitFunc_call_arg(tsharp_parser::Func_call_argContext *ctx) = 0;

  virtual void enterReturn_statement(tsharp_parser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(tsharp_parser::Return_statementContext *ctx) = 0;

  virtual void enterClass(tsharp_parser::ClassContext *ctx) = 0;
  virtual void exitClass(tsharp_parser::ClassContext *ctx) = 0;

  virtual void enterField(tsharp_parser::FieldContext *ctx) = 0;
  virtual void exitField(tsharp_parser::FieldContext *ctx) = 0;

  virtual void enterConstructor(tsharp_parser::ConstructorContext *ctx) = 0;
  virtual void exitConstructor(tsharp_parser::ConstructorContext *ctx) = 0;

  virtual void enterConstructor_body(tsharp_parser::Constructor_bodyContext *ctx) = 0;
  virtual void exitConstructor_body(tsharp_parser::Constructor_bodyContext *ctx) = 0;

  virtual void enterObject_inst(tsharp_parser::Object_instContext *ctx) = 0;
  virtual void exitObject_inst(tsharp_parser::Object_instContext *ctx) = 0;

  virtual void enterAssignment(tsharp_parser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(tsharp_parser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(tsharp_parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(tsharp_parser::ExpressionContext *ctx) = 0;

  virtual void enterType(tsharp_parser::TypeContext *ctx) = 0;
  virtual void exitType(tsharp_parser::TypeContext *ctx) = 0;

  virtual void enterCustom_type(tsharp_parser::Custom_typeContext *ctx) = 0;
  virtual void exitCustom_type(tsharp_parser::Custom_typeContext *ctx) = 0;

  virtual void enterAny_type(tsharp_parser::Any_typeContext *ctx) = 0;
  virtual void exitAny_type(tsharp_parser::Any_typeContext *ctx) = 0;

  virtual void enterIf_statement(tsharp_parser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(tsharp_parser::If_statementContext *ctx) = 0;

  virtual void enterElse_if_statement(tsharp_parser::Else_if_statementContext *ctx) = 0;
  virtual void exitElse_if_statement(tsharp_parser::Else_if_statementContext *ctx) = 0;

  virtual void enterElse_statement(tsharp_parser::Else_statementContext *ctx) = 0;
  virtual void exitElse_statement(tsharp_parser::Else_statementContext *ctx) = 0;

  virtual void enterPi_constant(tsharp_parser::Pi_constantContext *ctx) = 0;
  virtual void exitPi_constant(tsharp_parser::Pi_constantContext *ctx) = 0;

  virtual void enterAbsolute_value(tsharp_parser::Absolute_valueContext *ctx) = 0;
  virtual void exitAbsolute_value(tsharp_parser::Absolute_valueContext *ctx) = 0;

  virtual void enterSquare_root(tsharp_parser::Square_rootContext *ctx) = 0;
  virtual void exitSquare_root(tsharp_parser::Square_rootContext *ctx) = 0;

  virtual void enterExponent_fn(tsharp_parser::Exponent_fnContext *ctx) = 0;
  virtual void exitExponent_fn(tsharp_parser::Exponent_fnContext *ctx) = 0;

  virtual void enterPrintln_statement(tsharp_parser::Println_statementContext *ctx) = 0;
  virtual void exitPrintln_statement(tsharp_parser::Println_statementContext *ctx) = 0;

  virtual void enterPrint_statement(tsharp_parser::Print_statementContext *ctx) = 0;
  virtual void exitPrint_statement(tsharp_parser::Print_statementContext *ctx) = 0;


};

