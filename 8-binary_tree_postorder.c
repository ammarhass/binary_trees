#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through binary tree
 * using post-order traversal
 * @tree: Pointer to the root node of tree to traverse
 * @func: Pointer to function to call for each node
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
