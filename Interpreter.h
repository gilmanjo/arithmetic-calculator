#pragma once
#include "Expression_Tree.h"
#include <cstring>


// nonliteral symbol definitions
#ifndef STRING_EXP
#define STRING_EXP
const char* const STRING_ADD = "+";
const char* const STRING_SUB = "-";
const char* const STRING_MULTI = "*";
const char* const STRING_DIVIDE = "/";
const char* const STRING_LP = "(";
const char* const STRING_RP = ")";
#endif


// The Interpreter design pattern is responsible for parsing input
// from command line into a data structure that can be evaluated
class Interpreter {

public:

	Interpreter();
	virtual ~Interpreter();
	Expression_Tree *Interpret(char *str[]);
};