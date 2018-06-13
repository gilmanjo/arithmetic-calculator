#include "stdafx.h"
#include "ParaExp.h"
#include "SummationExp.h"
#include "DigitExp.h"


ParaExp::ParaExp()
{
}


ParaExp::~ParaExp()
{
}

Node * ParaExp::Parse(char * str[]) {

	// Check for parenthenses pattern
	if (ExpressionExp::MatchToken(str, STRING_LP)) {

		char *original = *str;
		ExpressionExp::NextToken(str);

		SummationExp *s;
		Add_Node_Builder anb;
		Sub_Node_Builder snb;
		s = new SummationExp(&anb, &snb);  // TODO: actually manage memory
		Node *new_node = s->Parse(str);
		if (new_node != nullptr) {

			ExpressionExp::NextToken(str);
			if (ExpressionExp::MatchToken(str, STRING_RP)) {

				ExpressionExp::NextToken(str);
				return new_node;
			}
		}

		*str = original;
	}

	// Else look for a number
	DigitExp *d;
	Value_Node_Builder vnb;
	d = new DigitExp(&vnb);
	Node *new_node = d->Parse(str);
	if (new_node != nullptr) { return new_node; }

	return nullptr;
}
