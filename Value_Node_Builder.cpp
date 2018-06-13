#include "stdafx.h"
#include "Value_Node_Builder.h"


Value_Node_Builder::Value_Node_Builder()
{
}


Value_Node_Builder::~Value_Node_Builder()
{
}

void Value_Node_Builder::BuildNode() {

	_current_node = new Value_Node;
}

void Value_Node_Builder::AddValue(char *val) {

	_current_node->SetValue(val);
}

Node * Value_Node_Builder::GetNode() {

	return _current_node;
}
