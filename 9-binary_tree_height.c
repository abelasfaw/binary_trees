#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL,else height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_childs = 0, right_childs = 0;

	if (tree)
	{
		if (tree->left)
		{
			left_childs = 1 + binary_tree_height(tree->left);
		}
		else
		{
			left_childs = 0;
		}
		if (tree->right)
		{
			right_childs = 1 + binary_tree_height(tree->right);
		}
		else
		{
			right_childs = 0;
		}
		return (left_childs > right_childs ? left_childs : right_childs);
	}
	return (0);
}
