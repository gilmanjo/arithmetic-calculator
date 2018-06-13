#include "stdafx.h"
#include "Add_Node.h"
#include "Visitor.h"


Add_Node::Add_Node()
{
}


Add_Node::~Add_Node()
{
}

int Add_Node::Accept(Visitor *visitor) {

	return visitor->VisitNode(this);
}
