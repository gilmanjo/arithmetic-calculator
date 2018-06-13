#include "stdafx.h"
#include "Divide_Node.h"
#include "Visitor.h"


Divide_Node::Divide_Node()
{
}


Divide_Node::~Divide_Node()
{
}

int Divide_Node::Accept(Visitor *visitor) {

	return visitor->VisitNode(this);
}