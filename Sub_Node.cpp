#include "stdafx.h"
#include "Sub_Node.h"
#include "Visitor.h"


Sub_Node::Sub_Node()
{
}


Sub_Node::~Sub_Node()
{
}

int Sub_Node::Accept(Visitor *visitor) {

	return visitor->VisitNode(this);
}