#include "binary_tree.h"
#include "iostream"

void TREE::add(Node*root, int value) {
	Node*current_node = NULL;

	current_node = root;

	for (;;)
	{
		if (current_node->data >= value)
		{
			if (current_node->left == NULL)
			{
				Node*node = new Node;
				current_node->left = node;
				node->data = value;
				break;


			}
			else
				current_node = current_node->left;
		}
		else if (current_node->data < value)
		{
			if (current_node->right == NULL)
			{
				Node*node = new Node;
				current_node->right = node;
				node->data = value;
				break;
			}
			else
				current_node = current_node->right;
		}
	}
}