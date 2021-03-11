#include "binary_trees.h"

/**
 * binary_tree_node - Binary tree node
 * @parent: Pointer to the parent node
 * @value: integer to store
 *
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		printf("Error: Can´t malloc\n");
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
