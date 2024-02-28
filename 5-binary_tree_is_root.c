#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: pointer to the node to check
 *
 * Return: 1 - if node is root
 *         Otherwise - 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
