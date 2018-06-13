#pragma once
#include "Node.h"


// Composite analogous to Node composite.
// Builders decouple object creation from their implementation.
class Node_Builder
{
public:
	Node_Builder();
	virtual ~Node_Builder();
	virtual void BuildNode() { ; }
	virtual void AddValue(char *val) { ; }
	virtual Node *GetNode() { return nullptr; }
};

