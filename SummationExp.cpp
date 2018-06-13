#include "stdafx.h"
#include "SummationExp.h"
#include "ProductExp.h"


SummationExp::SummationExp(Add_Node_Builder *a_bldr, Sub_Node_Builder *s_bldr) {

	anb = a_bldr;
	snb = s_bldr;
}


SummationExp::~SummationExp()
{
}

Node * SummationExp::Parse(char * str[]) {

	// builders can't easily be reused, maybe an abstract factory is better?
	ProductExp *p;
	Multi_Node_Builder *mnb = new Multi_Node_Builder;
	Divide_Node_Builder *dnb = new Divide_Node_Builder;
	p = new ProductExp(mnb, dnb);
	Node *lh_node = p->Parse(str);

	if (lh_node != nullptr) {

		char *original = *str;
		ExpressionExp::NextToken(str);
		if (ExpressionExp::MatchToken(str, STRING_ADD)) {

			// Create more nodes if this is a sum
			ExpressionExp::NextToken(str);

			SummationExp *s;
			// can reduce some lines here with overloading in
			// class functions
			Add_Node_Builder *new_anb = new Add_Node_Builder;
			Sub_Node_Builder *new_snb = new Sub_Node_Builder;
			s = new SummationExp(new_anb, new_snb);
			Node *rh_node = s->Parse(str);
			if (rh_node != nullptr) {

				// return subtree of summation expression
				Node *op_node = ExpressionExp::MakeNode(this->anb, 
					(char*) STRING_ADD);
				op_node->SetLeft(lh_node);
				op_node->SetRight(rh_node);
				return op_node;
			}
		}
		else if (ExpressionExp::MatchToken(str, STRING_SUB)) {

			// Create more nodes if this is a sum
			ExpressionExp::NextToken(str);

			SummationExp *s;
			Add_Node_Builder *new_anb = new Add_Node_Builder;
			Sub_Node_Builder *new_snb = new Sub_Node_Builder;
			s = new SummationExp(new_anb, new_snb);
			Node *rh_node = s->Parse(str);
			if (rh_node != nullptr) {

				// return subtree of summation expression
				Node *op_node = ExpressionExp::MakeNode(this->snb,
					(char*)STRING_SUB);
				op_node->SetLeft(lh_node);
				op_node->SetRight(rh_node);
				return op_node;
			}
		}

		*str = original;
		return lh_node;
	}

	return nullptr;
}