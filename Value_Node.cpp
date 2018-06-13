#include "stdafx.h"
#include "Value_Node.h"
#include "Visitor.h"


Value_Node::Value_Node()
{
}


Value_Node::~Value_Node()
{
}

int Value_Node::Accept(Visitor *visitor) {

	return visitor->VisitNode(this);
}