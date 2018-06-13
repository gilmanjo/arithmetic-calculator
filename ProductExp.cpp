#include "stdafx.h"
#include "ProductExp.h"
#include "ParaExp.h"


ProductExp::ProductExp(Multi_Node_Builder *m_bldr, Divide_Node_Builder *d_bldr) {

	mnb = m_bldr;
	dnb = d_bldr;
}


ProductExp::~ProductExp()
{
}

// This process could probably be optimized with another design pattern.
Node * ProductExp::Parse(char * str[]) {

	ParaExp *pa;
	pa = new ParaExp;
	Node *lh_node = pa->Parse(str);

	if (lh_node != nullptr) { 
		
		char *original = *str;
		ExpressionExp::NextToken(str);
		if (ExpressionExp::MatchToken(str, STRING_MULTI)) {

			// Create more nodes if this is a product
			ExpressionExp::NextToken(str);
			ProductExp *p;
			p = new ProductExp(mnb, dnb);
			Node *rh_node = p->Parse(str);
			if (rh_node != nullptr) {

				Node *op_node = ExpressionExp::MakeNode(this->mnb,
					(char*) STRING_MULTI);
				op_node->SetLeft(lh_node);
				op_node->SetRight(rh_node);
				return op_node;
			}
		}

		else if (ExpressionExp::MatchToken(str, STRING_DIVIDE)) {

			// Create more nodes if this is a product
			ExpressionExp::NextToken(str);
			ProductExp *p;
			p = new ProductExp(mnb, dnb);
			Node *rh_node = p->Parse(str);
			if (rh_node != nullptr) {

				Node *op_node = ExpressionExp::MakeNode(this->mnb,
					(char*)STRING_DIVIDE);
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