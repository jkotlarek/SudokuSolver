#pragma once
#include "Node.h"
#include "Header.h"
class DoublyLinkedList
{

public:
	int dim;
	Node root;
	Node *current = new Node();
	Header *currentHeader = new Header();

	DoublyLinkedList();
	Node createRoot();
	Header createHeader(Node root);
	Node addNode(Header header);
	DoublyLinkedList(int dim);


~DoublyLinkedList();
};

