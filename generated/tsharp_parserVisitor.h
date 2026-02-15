
// Generated from tsharp_parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "tsharp_parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by tsharp_parser.
 */
class  tsharp_parserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by tsharp_parser.
   */
    virtual std::any visitProgram(tsharp_parser::ProgramContext *context) = 0;

    virtual std::any visitMain_function(tsharp_parser::Main_functionContext *context) = 0;

    virtual std::any visitFunction(tsharp_parser::FunctionContext *context) = 0;

    virtual std::any visitFunction_arg(tsharp_parser::Function_argContext *context) = 0;

    virtual std::any visitFunc_body(tsharp_parser::Func_bodyContext *context) = 0;

    virtual std::any visitFunc_call(tsharp_parser::Func_callContext *context) = 0;

    virtual std::any visitFunc_call_arg(tsharp_parser::Func_call_argContext *context) = 0;

    virtual std::any visitReturn_statement(tsharp_parser::Return_statementContext *context) = 0;

    virtual std::any visitClass(tsharp_parser::ClassContext *context) = 0;

    virtual std::any visitField(tsharp_parser::FieldContext *context) = 0;

    virtual std::any visitConstructor(tsharp_parser::ConstructorContext *context) = 0;

    virtual std::any visitConstructor_body(tsharp_parser::Constructor_bodyContext *context) = 0;

    virtual std::any visitObject_inst(tsharp_parser::Object_instContext *context) = 0;

    virtual std::any visitAssignment(tsharp_parser::AssignmentContext *context) = 0;

    virtual std::any visitExpression(tsharp_parser::ExpressionContext *context) = 0;

    virtual std::any visitType(tsharp_parser::TypeContext *context) = 0;

    virtual std::any visitCustom_type(tsharp_parser::Custom_typeContext *context) = 0;

    virtual std::any visitAny_type(tsharp_parser::Any_typeContext *context) = 0;

    virtual std::any visitIf_statement(tsharp_parser::If_statementContext *context) = 0;

    virtual std::any visitElse_if_statement(tsharp_parser::Else_if_statementContext *context) = 0;

    virtual std::any visitElse_statement(tsharp_parser::Else_statementContext *context) = 0;

    virtual std::any visitPi_constant(tsharp_parser::Pi_constantContext *context) = 0;

    virtual std::any visitAbsolute_value(tsharp_parser::Absolute_valueContext *context) = 0;

    virtual std::any visitSquare_root(tsharp_parser::Square_rootContext *context) = 0;

    virtual std::any visitExponent_fn(tsharp_parser::Exponent_fnContext *context) = 0;

    virtual std::any visitPrintln_statement(tsharp_parser::Println_statementContext *context) = 0;

    virtual std::any visitPrint_statement(tsharp_parser::Print_statementContext *context) = 0;


};

