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

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: depth
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		size = size + binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		size = size + binary_tree_size(tree->right);
	}
	return (size);
}

/**
 * _pow_recursion - x raised to y
 * @x: number
 * @y: power
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y == 0)
	{
		res = 1;
	}
	else if (y > 0)
	{
		y--;
		res = x * _pow_recursion(x, y);
	}
	else
	{
		res = -1;
	}
	return (res);
}

/**
 * binary_tree_is_perfect - if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if it is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;
	int height;
	int max;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	max = _pow_recursion(2, height + 1) - 1;
	if (max == size)
		return (1);
	else
		return (0);
}
