#include "stdafx.h"
#include "ExpressionExp.h"
#include "Add_Node_Builder.h"
#include "SummationExp.h"
#include <string.h>

ExpressionExp::ExpressionExp()
{
}


ExpressionExp::~ExpressionExp()
{
}

Node * ExpressionExp::Parse(char * str[]) {

	SummationExp *s;
	Add_Node_Builder anb;
	Sub_Node_Builder snb;
	s = new SummationExp(&anb, &snb);
	Node *lh_node = s->Parse(str);
	return lh_node;
}

// skip whitespace
void ExpressionExp::NextToken(char * str[]) {

	while (*str[0] == ' ' || *str[0] == '\n' || *str[0] == '\t') {
		*str += 1;
	}
}

bool ExpressionExp::MatchToken(char *str[], const char *token) {

	if (strncmp(*str, token, strlen(token)) == 0) {

		*str = *str + strlen(token);
		return true;
	}

	return false;
}

// utilize builder to generate a new node
Node * ExpressionExp::MakeNode(Node_Builder* nb, char *val) {

	nb->BuildNode();
	nb->AddValue(val);
	return nb->GetNode();
}
