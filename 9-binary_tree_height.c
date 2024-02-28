#include "binary_trees.h"
#define new_max(x, y) (((x) >= (y)) ? (x) : (y))

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: if tree is null - 0
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (new_max(left, right));
}
