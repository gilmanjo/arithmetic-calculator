#include "stdafx.h"
#include "Add_Node_Builder.h"


Add_Node_Builder::Add_Node_Builder()
{
}


Add_Node_Builder::~Add_Node_Builder()
{
}

void Add_Node_Builder::BuildNode() {

	_current_node = new Add_Node;
}

void Add_Node_Builder::AddValue(char *val) {

	_current_node->SetValue(val);
}

Node * Add_Node_Builder::GetNode() {

	return _current_node;
}
