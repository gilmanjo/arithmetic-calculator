#include "stdafx.h"
#include "Sub_Node_Builder.h"


Sub_Node_Builder::Sub_Node_Builder()
{
}


Sub_Node_Builder::~Sub_Node_Builder()
{
}

void Sub_Node_Builder::BuildNode() {

	_current_node = new Sub_Node;
}

void Sub_Node_Builder::AddValue(char *val) {

	_current_node->SetValue(val);
}

Node * Sub_Node_Builder::GetNode() {

	return _current_node;
}
