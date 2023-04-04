#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: The head node's data (n).
 **/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
return (0);
temp = *head;
n = (*head)->n;
*head = (*head)->next;
free(temp);
return (n);
}
