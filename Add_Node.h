#pragma once
#include "Binary_Node.h"


class Add_Node : public Binary_Node {

public:

	Add_Node();
	virtual ~Add_Node();
	virtual int Accept(Visitor *visitor);

private:

	char *val;
	Node *left;
	Node *right;
};

