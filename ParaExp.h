#pragma once
#include "ExpressionExp.h"


// forward declarations
class SummationExp;

// Nonterminal expression, part of Interpreter design pattern
// Pa := "(" S ")" | D
class ParaExp : public ExpressionExp {

public:

	ParaExp();
	virtual ~ParaExp();
	virtual Node *Parse(char *str[]);
};

