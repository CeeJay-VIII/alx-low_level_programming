#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to the head of the list
 * @n: value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *current;
/* allocate new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/* set the values for the new node */
new_node->n = n;
new_node->next = NULL;
/* if the list is empty, set the new node as head */
if (*head == NULL)
*head = new_node;
else
{
/* traverse the list until the last node */
current = *head;
while (current->next != NULL)
current = current->next;
/* set the last node's next to the new node */
current->next = new_node;
}
/* return the new node's address */
return (new_node);
}
