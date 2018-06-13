#pragma once
#include "ExpressionExp.h"
#include "Add_Node_Builder.h"
#include "Sub_Node_Builder.h"


// Nonterminal expression, part of Interpreter design pattern
// S := P "+" S | P "-" S | P
class SummationExp : public ExpressionExp {

public:

	SummationExp(Add_Node_Builder *a_bldr, Sub_Node_Builder *s_bldr);
	virtual ~SummationExp();
	virtual Node *Parse(char *str[]);

private:

	Add_Node_Builder *anb;
	Sub_Node_Builder *snb;
};

