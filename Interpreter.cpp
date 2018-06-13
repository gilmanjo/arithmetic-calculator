#include "stdafx.h"
#include "Interpreter.h"
#include "ExpressionExp.h"


Interpreter::Interpreter() {
}


Interpreter::~Interpreter() {
}

Expression_Tree *Interpreter::Interpret(char *str[]) {
	
	Expression_Tree *tree = new Expression_Tree;
	ExpressionExp expr;
	char *input = *str;

	Node *root;
	root = expr.Parse(str);
	tree->SetRoot(root);
	return tree;
}
