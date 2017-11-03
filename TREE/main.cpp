#include <iostream>
#include "binary_tree.h"

void debbuging();

int main()
{
	TREE tree;

	Node*root = new Node;
	root->data = 10;

	tree.add(root, 2);
	tree.add(root, 11);
	tree.add(root, 1);
	tree.add(root, 3);

	debbuging();

	return 0;
}

void debbuging(){};

