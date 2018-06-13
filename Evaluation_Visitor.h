#pragma once
#include "Visitor.h"
#include <cstdlib>


// Runs through expression tree inorder and prints the result.
// Future operators must be added to the functions overloading VisitNode
// TODO: Add more operations, cleanup code structure a bit
class Evaluation_Visitor :
	public Visitor
{
public:
	Evaluation_Visitor();
	virtual ~Evaluation_Visitor();
	virtual int VisitNode(Node* node);
	virtual int VisitNode(Value_Node* node);
	virtual int VisitNode(Add_Node* node);
	virtual int VisitNode(Sub_Node* node);
	virtual int VisitNode(Multi_Node* node);
	virtual int VisitNode(Divide_Node* node);

private:

	int _sum;
};

