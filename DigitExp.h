#pragma once
#include "ExpressionExp.h"
#include "Value_Node_Builder.h"
#include <string.h>


#ifndef BUFFER_LEN
#define BUFFER_LEN
const int MAX_DIGIT_LEN = 1000;
#endif

// Terminal expression, part of Interpreter design pattern
// D := [0-9]+
class DigitExp : public ExpressionExp {

public:

	DigitExp(Value_Node_Builder* bldr);
	virtual ~DigitExp();
	virtual Node *Parse(char *str[]);

private:

	Value_Node_Builder *vnb;
};

