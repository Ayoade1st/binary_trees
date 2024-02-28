#include "binary_trees.h"

/**
 * is_perfect- checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: if tree is perfect - 1
 *  otherwise - 0
 */

int is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + is_perfect(tree->left);
		r = 1 + is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (0);
}


/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: if tree is perfect - 1
 *  otherwise - 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
		return (0);
	res = is_perfect(tree);
	if (res != 0)
		return (1);
	return (0);
}
