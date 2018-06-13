#pragma once

#include <string.h>

class Visitor;

class Node {

public:

	Node();
	virtual ~Node();
	virtual int Accept(Visitor *visitor);
	virtual void SetValue(char *value);
	virtual void SetLeft(Node *new_left);
	virtual void SetRight(Node *new_right);
	virtual char *GetValue();
	virtual Node *GetLeft();
	virtual Node *GetRight();

private:

	char *val;
	Node *left;
	Node *right;
};

