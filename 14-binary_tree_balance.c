#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL,else height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_childs = 0, r_childs = 0;

	if (tree)
	{
		l_childs = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_childs = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_childs > r_childs) ? l_childs : r_childs);
	}
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tre
 * @tree: pointer to the root node of the tree to measure the balance facto
 * Return: 0 if tree is NULL, else balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
