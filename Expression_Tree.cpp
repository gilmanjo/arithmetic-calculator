#include "stdafx.h"
#include "Expression_Tree.h"



Expression_Tree::Expression_Tree()
{
}


Expression_Tree::~Expression_Tree()
{
}

void Expression_Tree::SetRoot(Node * new_root) {

	this->root = new_root;
}

Node *Expression_Tree::GetRoot() {

	return this->root;
}

void Expression_Tree::Traverse() {

	inorder(root);
}

// debugging function to verify the tree was built correctly
void Expression_Tree::inorder(Node * node) {

	if (node == nullptr) { return; }

	printf("Left\n");
	inorder(node->GetLeft());
	printf("Val:\t%s\n", node->GetValue());
	printf("Right\n");
	inorder(node->GetRight());
	
}
