#include "stdafx.h"
#include "Multi_Node_Builder.h"


Multi_Node_Builder::Multi_Node_Builder()
{
}


Multi_Node_Builder::~Multi_Node_Builder()
{
}

void Multi_Node_Builder::BuildNode() {

	_current_node = new Multi_Node;
}

void Multi_Node_Builder::AddValue(char *val) {

	_current_node->SetValue(val);
}

Node * Multi_Node_Builder::GetNode() {

	return _current_node;
}
