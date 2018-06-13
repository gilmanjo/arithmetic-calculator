#pragma once
#include "Binary_Node_Builder.h"
#include "Divide_Node.h"


class Divide_Node_Builder : public Binary_Node_Builder {

public:

	Divide_Node_Builder();
	virtual ~Divide_Node_Builder();
	virtual void BuildNode();
	virtual void AddValue(char *val);
	virtual Node *GetNode();

private:

	Node * _current_node;
};

