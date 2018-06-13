#pragma once
#include "Node.h"
#include "Value_Node.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Multi_Node.h"
#include "Divide_Node.h"


// Visitor design pattern used to traverse expression tree.  Derivatives
// of this class may use nodes' Accept function to hook into data structure
// without altering the implementation.
// TODO: Find a way to avoid hardcoding return types?
class Visitor {

public:

	Visitor();
	virtual ~Visitor();
	virtual int VisitNode(Node* node);
	virtual int VisitNode(Value_Node* node);
	virtual int VisitNode(Add_Node* node);
	virtual int VisitNodeSub(Sub_Node* node);
	virtual int VisitNode(Multi_Node* node);
	virtual int VisitNodeDivide(Divide_Node* node);
};

