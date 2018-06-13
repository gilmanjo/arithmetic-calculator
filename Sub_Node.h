#pragma once
#include "Binary_Node.h"


class Sub_Node : public Binary_Node {

public:

	Sub_Node();
	virtual ~Sub_Node();
	virtual int Accept(Visitor *visitor);

private:

	char *val;
	Node *left;
	Node *right;
};

