#include "stdafx.h"
#include "Multi_Node.h"
#include "Visitor.h"


Multi_Node::Multi_Node()
{
}


Multi_Node::~Multi_Node()
{
}

int Multi_Node::Accept(Visitor *visitor) {

	return visitor->VisitNode(this);
}