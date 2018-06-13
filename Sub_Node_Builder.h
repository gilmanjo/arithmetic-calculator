#pragma once
#include "Binary_Node_Builder.h"
#include "Sub_Node.h"


class Sub_Node_Builder : public Binary_Node_Builder {

public:

	Sub_Node_Builder();
	virtual ~Sub_Node_Builder();
	virtual void BuildNode();
	virtual void AddValue(char *val);
	virtual Node *GetNode();

private:

	Node * _current_node;
};

