#pragma once
#include "Node.h"

// basic binary expression tree built from infix notation input
class Expression_Tree {

public:

	Expression_Tree();
	virtual ~Expression_Tree();
	virtual void SetRoot(Node *new_root);
	virtual Node *GetRoot();
	virtual void Traverse();

private:

	Node *root;
	void inorder(Node *node);
};

