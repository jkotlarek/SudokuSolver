#include "stdafx.h"
#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList(int dim1)
{
	dim = dim1;
	root = createRoot();
    current = root;

	for (int i = 0; i < 4 * dim*dim; i++) {
		createHeader(*root);
	}

	do {
		current = root;
		currentHeader = root->right;
		for (int i = 0; i < 4 * dim*dim; i++) {
			addNode(*currentHeader);
		}
	} while (currentHeader != root);

}

Header DoublyLinkedList::createRoot() {
	Header *newRoot = new Header();
	root->left = newRoot;
	root->right = newRoot;

	return *root;
}

void DoublyLinkedList::createHeader(Header& root) {
	Header *header = new Header();
	header->right = &root;
	header->left = root.left;
	header->up = header;
	header->down = header;

	header->right->left = header;
	header->left->right = header;

}

void DoublyLinkedList::addNode(Header& header) {
	Node *node = new Node();

	node->up = header.up;
	node->down = header;

	node->up->down = node;
	node->down->up = node;

	if (current == root) {
		node->left = node;
		node->right = node;
	}
	else {
		node->left = current;
		node->right = current->right;
		node->left->right = node;
		node->right->left = node;
	}
	current = node;
	header.size++;
}

DoublyLinkedList::~DoublyLinkedList()
{
}
