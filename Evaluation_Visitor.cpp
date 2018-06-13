#include "stdafx.h"
#include "Evaluation_Visitor.h"


Evaluation_Visitor::Evaluation_Visitor() {

	_sum = 0;  // currently unused
}


Evaluation_Visitor::~Evaluation_Visitor() {

}

int Evaluation_Visitor::VisitNode(Node *node) {

	return 0;
}

int Evaluation_Visitor::VisitNode(Value_Node * node) {
	
	return atoi(node->GetValue());
}

int Evaluation_Visitor::VisitNode(Add_Node * node) {
	int lh = node->GetLeft()->Accept(this);
	int rh = node->GetRight()->Accept(this);
	return lh + rh;
}

// TODO: finish subtraction operation
int Evaluation_Visitor::VisitNode(Sub_Node * node) {
	int lh = node->GetLeft()->Accept(this);
	int rh = node->GetRight()->Accept(this);
	return lh - rh;
}

int Evaluation_Visitor::VisitNode(Multi_Node * node) {
	int lh = node->GetLeft()->Accept(this);
	int rh = node->GetRight()->Accept(this);
	return lh * rh;
}

// TODO: finish division operation
int Evaluation_Visitor::VisitNode(Divide_Node * node) {
	int lh = node->GetLeft()->Accept(this);
	int rh = node->GetRight()->Accept(this);
	return lh / rh;
}
