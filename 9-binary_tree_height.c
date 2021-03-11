#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0;
	size_t hr = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	hl = binary_tree_height(tree->left);
	hl++;
	hr = binary_tree_height(tree->right);
	hr++;
	if (hl > hr)
		return (hl);
	else
		return (hr);
}
