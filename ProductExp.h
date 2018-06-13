#pragma once
#include "ExpressionExp.h"
#include "Multi_Node_Builder.h"
#include "Divide_Node_Builder.h"


// Nonterminal expression, part of Interpreter design pattern
// P := Pa "*" P | Pa "/" P | Pa
class ProductExp : public ExpressionExp {

public:

	ProductExp(Multi_Node_Builder *m_bldr, Divide_Node_Builder *d_bldr);
	virtual ~ProductExp();
	virtual Node *Parse(char *str[]);

private:

	Multi_Node_Builder *mnb;
	Divide_Node_Builder *dnb;
};

