#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as a left child of another node
 * @parent : a pointer to the node to insert the left-child in
 * @value: value to store in new node
 * Return: on success, pointer to new node.NULL on failure / if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left_child;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		old_left_child = parent->left;
		new_node->left = old_left_child;
		old_left_child->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;
	return (new_node);
}
