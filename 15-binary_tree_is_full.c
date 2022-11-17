#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or not full, 1 if tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if ((tree->left)  && (tree->right))
	{
		if (binary_tree_is_full(tree->left) == 1 && binary_tree_is_full(tree->right)
		== 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
