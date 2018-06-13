#include "stdafx.h"
#include "Node.h"


// Pretty basic Composite of binary nodes holding operators or numbers
// Created by corresponding builders, see them for creation details
Node::Node() {
}

Node::~Node() {
}

int Node::Accept(Visitor *visitor) {
	return 0;
}

void Node::SetValue(char *value) {

	this->val = new char[strlen(value) + 1];
	strcpy_s(this->val, strlen(value) + 1, value);
}

void Node::SetLeft(Node *new_left) {
	this->left = new_left;
}

void Node::SetRight(Node *new_right) {
	this->right = new_right;
}

char *Node::GetValue() {

	return this->val;
}

Node *Node::GetLeft() {

	return this->left;
}

Node * Node::GetRight() {

	return this->right;
}

