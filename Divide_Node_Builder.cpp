#include "stdafx.h"
#include "Divide_Node_Builder.h"


Divide_Node_Builder::Divide_Node_Builder()
{
}


Divide_Node_Builder::~Divide_Node_Builder()
{
}

void Divide_Node_Builder::BuildNode() {

	_current_node = new Divide_Node;
}

void Divide_Node_Builder::AddValue(char *val) {

	_current_node->SetValue(val);
}

Node * Divide_Node_Builder::GetNode() {

	return _current_node;
}