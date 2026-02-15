
// Generated from tsharp_parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "tsharp_parserListener.h"


/**
 * This class provides an empty implementation of tsharp_parserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  tsharp_parserBaseListener : public tsharp_parserListener {
public:

  virtual void enterProgram(tsharp_parser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(tsharp_parser::ProgramContext * /*ctx*/) override { }

  virtual void enterMain_function(tsharp_parser::Main_functionContext * /*ctx*/) override { }
  virtual void exitMain_function(tsharp_parser::Main_functionContext * /*ctx*/) override { }

  virtual void enterFunction(tsharp_parser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(tsharp_parser::FunctionContext * /*ctx*/) override { }

  virtual void enterFunction_arg(tsharp_parser::Function_argContext * /*ctx*/) override { }
  virtual void exitFunction_arg(tsharp_parser::Function_argContext * /*ctx*/) override { }

  virtual void enterFunc_body(tsharp_parser::Func_bodyContext * /*ctx*/) override { }
  virtual void exitFunc_body(tsharp_parser::Func_bodyContext * /*ctx*/) override { }

  virtual void enterFunc_call(tsharp_parser::Func_callContext * /*ctx*/) override { }
  virtual void exitFunc_call(tsharp_parser::Func_callContext * /*ctx*/) override { }

  virtual void enterFunc_call_arg(tsharp_parser::Func_call_argContext * /*ctx*/) override { }
  virtual void exitFunc_call_arg(tsharp_parser::Func_call_argContext * /*ctx*/) override { }

  virtual void enterReturn_statement(tsharp_parser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(tsharp_parser::Return_statementContext * /*ctx*/) override { }

  virtual void enterClass(tsharp_parser::ClassContext * /*ctx*/) override { }
  virtual void exitClass(tsharp_parser::ClassContext * /*ctx*/) override { }

  virtual void enterField(tsharp_parser::FieldContext * /*ctx*/) override { }
  virtual void exitField(tsharp_parser::FieldContext * /*ctx*/) override { }

  virtual void enterConstructor(tsharp_parser::ConstructorContext * /*ctx*/) override { }
  virtual void exitConstructor(tsharp_parser::ConstructorContext * /*ctx*/) override { }

  virtual void enterConstructor_body(tsharp_parser::Constructor_bodyContext * /*ctx*/) override { }
  virtual void exitConstructor_body(tsharp_parser::Constructor_bodyContext * /*ctx*/) override { }

  virtual void enterObject_inst(tsharp_parser::Object_instContext * /*ctx*/) override { }
  virtual void exitObject_inst(tsharp_parser::Object_instContext * /*ctx*/) override { }

  virtual void enterAssignment(tsharp_parser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(tsharp_parser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(tsharp_parser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(tsharp_parser::ExpressionContext * /*ctx*/) override { }

  virtual void enterType(tsharp_parser::TypeContext * /*ctx*/) override { }
  virtual void exitType(tsharp_parser::TypeContext * /*ctx*/) override { }

  virtual void enterCustom_type(tsharp_parser::Custom_typeContext * /*ctx*/) override { }
  virtual void exitCustom_type(tsharp_parser::Custom_typeContext * /*ctx*/) override { }

  virtual void enterAny_type(tsharp_parser::Any_typeContext * /*ctx*/) override { }
  virtual void exitAny_type(tsharp_parser::Any_typeContext * /*ctx*/) override { }

  virtual void enterIf_statement(tsharp_parser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(tsharp_parser::If_statementContext * /*ctx*/) override { }

  virtual void enterElse_if_statement(tsharp_parser::Else_if_statementContext * /*ctx*/) override { }
  virtual void exitElse_if_statement(tsharp_parser::Else_if_statementContext * /*ctx*/) override { }

  virtual void enterElse_statement(tsharp_parser::Else_statementContext * /*ctx*/) override { }
  virtual void exitElse_statement(tsharp_parser::Else_statementContext * /*ctx*/) override { }

  virtual void enterPi_constant(tsharp_parser::Pi_constantContext * /*ctx*/) override { }
  virtual void exitPi_constant(tsharp_parser::Pi_constantContext * /*ctx*/) override { }

  virtual void enterAbsolute_value(tsharp_parser::Absolute_valueContext * /*ctx*/) override { }
  virtual void exitAbsolute_value(tsharp_parser::Absolute_valueContext * /*ctx*/) override { }

  virtual void enterSquare_root(tsharp_parser::Square_rootContext * /*ctx*/) override { }
  virtual void exitSquare_root(tsharp_parser::Square_rootContext * /*ctx*/) override { }

  virtual void enterExponent_fn(tsharp_parser::Exponent_fnContext * /*ctx*/) override { }
  virtual void exitExponent_fn(tsharp_parser::Exponent_fnContext * /*ctx*/) override { }

  virtual void enterPrintln_statement(tsharp_parser::Println_statementContext * /*ctx*/) override { }
  virtual void exitPrintln_statement(tsharp_parser::Println_statementContext * /*ctx*/) override { }

  virtual void enterPrint_statement(tsharp_parser::Print_statementContext * /*ctx*/) override { }
  virtual void exitPrint_statement(tsharp_parser::Print_statementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

