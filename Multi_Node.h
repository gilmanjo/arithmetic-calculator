#pragma once
#include "Binary_Node.h"


class Multi_Node : public Binary_Node {

public:

	Multi_Node();
	virtual ~Multi_Node();
	virtual int Accept(Visitor *visitor);

private:

	char *val;
	Node *left;
	Node *right;
};

