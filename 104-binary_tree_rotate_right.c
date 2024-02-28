#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 *
 *
 * Return: a pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *newN = NULL;

	if (!tree || !tree->left)
		return (NULL);

	newN = tree->left;
	temp = newN->right;
	tree->left = temp;
	if (temp)
		temp->parent = tree;
	newN->right = tree;
	newN->parent = tree->parent;
	tree->parent = newN;

	return (newN);
}
