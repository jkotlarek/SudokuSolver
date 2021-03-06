#pragma once
#include "Node.h"
#include "Header.h"
class DoublyLinkedList
{

public:
	int dim;
	Header *root;
	Node *current = new Node();
	Header *currentHeader = new Header();

	DoublyLinkedList();
	Header createRoot();
	void createHeader(Header& root);
	void addNode(Header& header);
	DoublyLinkedList(int dim);


~DoublyLinkedList();
};

