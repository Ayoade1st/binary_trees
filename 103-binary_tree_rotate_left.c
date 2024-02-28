#include "binary_trees.h"

/**
 *binary_tree_rotate_left - performs a left-rotation on a binary tree
 *@tree: is a pointer to the root node of the tree to rotate
 *
 *
 *Return: pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *newR = NULL;

	if (!tree || !tree->right)
		return (NULL);

	newR = tree->right;
	temp = newR->left;
	tree->right = newR->left;
	if (temp)
		temp->parent = tree;
	newR->left = tree;
	newR->parent = tree->parent;
	tree->parent = newR;
	return (newR);
}
