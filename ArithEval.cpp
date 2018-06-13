#include "stdafx.h"
#include "ArithEval.h"


ArithEval::ArithEval() {
}


ArithEval::~ArithEval() {
}

void ArithEval::ReadExpression(char *expr[]) {

	expr_tree = interpreter.Interpret(expr);
}

void ArithEval::Evaluate() {

	if (expr_tree->GetRoot() == nullptr) {
		
		printf("Invalid symbol.  Supports + * ( ) [0-9]+\n");
		return;
	}

	int result = expr_tree->GetRoot()->Accept(&evaluator);
	printf("The solution is %d.\n\n", result);
}
