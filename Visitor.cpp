#include "stdafx.h"
#include "Visitor.h"


Visitor::Visitor() {
}


Visitor::~Visitor() {
}

int Visitor::VisitNode(Node *node) {
	return 0;
}

int Visitor::VisitNode(Value_Node * node) {
	return 0;
}

int Visitor::VisitNode(Add_Node * node) {
	return 0;
}

int Visitor::VisitNodeSub(Sub_Node * node) {
	return 0;
}

int Visitor::VisitNode(Multi_Node * node) {
	return 0;
}

int Visitor::VisitNodeDivide(Divide_Node * node) {
	return 0;
}
