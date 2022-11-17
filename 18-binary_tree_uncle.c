#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node:  pointer to the node to find the sibling
 * Return: NULL if parent or node is null or node has no sibline. else pointer
 * to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL if node is null or has no uncle, else pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
