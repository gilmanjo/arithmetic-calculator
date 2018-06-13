#pragma once
#include "Binary_Node_Builder.h"
#include "Add_Node.h"


class Add_Node_Builder : public Binary_Node_Builder {

public:

	Add_Node_Builder();
	virtual ~Add_Node_Builder();
	virtual void BuildNode();
	virtual void AddValue(char *val);
	virtual Node *GetNode();

private:

	Node * _current_node;
};

