#pragma once
#include "Node.h"


class Value_Node : public Node {

public:

	Value_Node();
	virtual ~Value_Node();
	virtual int Accept(Visitor *visitor);

private:

	char *val;
	Node *left;
	Node *right;
};

