
// Generated from tsharp_parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "tsharp_parserVisitor.h"


/**
 * This class provides an empty implementation of tsharp_parserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  tsharp_parserBaseVisitor : public tsharp_parserVisitor {
public:

  virtual std::any visitProgram(tsharp_parser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMain_function(tsharp_parser::Main_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(tsharp_parser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_arg(tsharp_parser::Function_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_body(tsharp_parser::Func_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_call(tsharp_parser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_call_arg(tsharp_parser::Func_call_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(tsharp_parser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass(tsharp_parser::ClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField(tsharp_parser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructor(tsharp_parser::ConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructor_body(tsharp_parser::Constructor_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_inst(tsharp_parser::Object_instContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(tsharp_parser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(tsharp_parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(tsharp_parser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCustom_type(tsharp_parser::Custom_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_type(tsharp_parser::Any_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(tsharp_parser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_if_statement(tsharp_parser::Else_if_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_statement(tsharp_parser::Else_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPi_constant(tsharp_parser::Pi_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbsolute_value(tsharp_parser::Absolute_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSquare_root(tsharp_parser::Square_rootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExponent_fn(tsharp_parser::Exponent_fnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintln_statement(tsharp_parser::Println_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_statement(tsharp_parser::Print_statementContext *ctx) override {
    return visitChildren(ctx);
  }


};

