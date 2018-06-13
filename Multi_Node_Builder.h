#pragma once
#include "Binary_Node_Builder.h"
#include "Multi_Node.h"


class Multi_Node_Builder : public Binary_Node_Builder {

public:

	Multi_Node_Builder();
	virtual ~Multi_Node_Builder();
	virtual void BuildNode();
	virtual void AddValue(char *val);
	virtual Node *GetNode();

private:

	Node * _current_node;
};

