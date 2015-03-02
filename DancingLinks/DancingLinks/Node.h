#pragma once
class Node
{
public:
	Node *up = new Node;
	Node *down = new Node;
	Node *left = new Node;
	Node *right = new Node;
	Node *head = new Node;

	Node();
~Node();
};

