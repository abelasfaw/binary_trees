#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is NULL, else depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *parent;

	if (tree == NULL)
	{
		return (0);
	}
	parent = tree->parent;
	while (parent)
	{
		depth += 1;
		parent = parent->parent;
	}
	return (depth);
}
