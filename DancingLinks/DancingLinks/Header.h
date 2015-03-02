#pragma once
#include "Node.h"
class Header :
	public Node
{
public:
	int size;
	Header *left = new Header;
	Header *right = new Header;

	Header();
~Header();
};

