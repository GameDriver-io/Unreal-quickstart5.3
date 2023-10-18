#pragma once


enum class Operation
{
    Exit,
    EvaluateNode,
    EvaluateOperator,
    EvaluateLeftOp,
    EvaluateRightOp,
    EvaluatePredicateContext,
    EvaluatePredicateCondition,
    ProcessFunction,
    EvaluateFunctionContext,
    EvaluateFunctionCondition,
    RetrieveResult,
    StoreResult,
    Break
};

static String Operation_ToString(Operation op)
{
    switch (op)
    {
    case Operation::Exit:
        return TEXT("Exit");
    case Operation::EvaluateNode:
        return TEXT("EvaluateNode");
    case      Operation::EvaluateOperator:
        return TEXT("EvaluateOperator");
    case          Operation::EvaluateLeftOp:
        return TEXT("EvaluateLeftOp");
    case         Operation::EvaluateRightOp:
        return TEXT("EvaluateRightOp");
    case     Operation::EvaluatePredicateContext:
        return TEXT("EvaluatePredicateContext");
    case        Operation::EvaluatePredicateCondition:
        return TEXT("EvaluatePredicateCondition");
    case       Operation::ProcessFunction:
        return TEXT("ProcessFunction");
    case        Operation::EvaluateFunctionContext:
        return TEXT("EvaluateFunctionContext");
    case        Operation::EvaluateFunctionCondition:
        return TEXT("EvaluateFunctionCondition");
    case        Operation::RetrieveResult:
        return TEXT("RetrieveResult");
    case        Operation::StoreResult:
        return TEXT("StoreResult");
    case         Operation::Break:
        return TEXT("Break");
    default:
        return TEXT("Invalid Operator");
    }
};
