#pragma once
#include "Binary_Node.h"


class Divide_Node : public Binary_Node {

public:
	Divide_Node();
	virtual ~Divide_Node();
	virtual int Accept(Visitor *visitor);

private:

	char *val;
	Node *left;
	Node *right;
};

