#pragma once
#include "Expression_Tree.h"
#include "Interpreter.h"
#include "Evaluation_Visitor.h"


// fascade class
class ArithEval {

public:

	ArithEval();
	virtual ~ArithEval();
	void ReadExpression(char *expr[]);
	void Evaluate();

private:

	Expression_Tree *expr_tree;
	Interpreter interpreter;
	Evaluation_Visitor evaluator;
};

