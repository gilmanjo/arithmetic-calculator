#pragma once
#include "Node_Builder.h"
#include "Value_Node.h"


class Value_Node_Builder :
	public Node_Builder
{
public:
	Value_Node_Builder();
	virtual ~Value_Node_Builder();
	virtual void BuildNode();
	virtual void AddValue(char *val);
	virtual Node *GetNode();

private:

	Node *_current_node;
};

