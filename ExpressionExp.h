#pragma once
#include "Node.h"
#include "Node_Builder.h"


#ifndef STRING_EXP
#define STRING_EXP
const char* const STRING_ADD = "+";
const char* const STRING_SUB = "-";
const char* const STRING_MULTI = "*";
const char* const STRING_DIVIDE = "/";
const char* const STRING_LP = "(";
const char* const STRING_RP = ")";
#endif


// forward declarations
class SummationExp;
class ProductExp;
class ParaExp;
class DigitExp;

// Effectively the abstract expression deriving terminal and nonterminal
// tokens of the grammar.  All functions use Parse to recursively build a tree,
// i.e. recursive descent parsing.  When matches are found, the Builder
// design pattern is used to create the actual nodes of the tree.  Nodes,
// Node Builders, and the Expression hierarchy all examples of the Composite
// design pattern.  

// TODO: cleanup memory leaks and properly implement destructors
// Input := Expression 
class ExpressionExp {

public:

	ExpressionExp();
	virtual ~ExpressionExp();
	virtual Node *Parse(char *str[]);
	void NextToken(char *str[]);
	bool MatchToken(char *str[], const char *token);
	Node *MakeNode(Node_Builder* nb, char *val);
};

