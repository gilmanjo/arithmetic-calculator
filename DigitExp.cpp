#include "stdafx.h"
#include "DigitExp.h"


DigitExp::DigitExp(Value_Node_Builder* bldr) {

	vnb = bldr;
}


DigitExp::~DigitExp() {
}

Node *DigitExp::Parse(char * str[])  {

	char *original = *str;
	ExpressionExp::NextToken(str);

	char digit[MAX_DIGIT_LEN];
	int digits_read;

	// match numbers with sscanf_s
	if (sscanf_s(*str, "%[0-9]%n", &digit, sizeof(*str),
		&digits_read) == 1) {

		// iterate past number
		*str += digits_read;

		Node *new_node;
		new_node = ExpressionExp::MakeNode(this->vnb, digit);
		return new_node;
	}

	return nullptr;
}
