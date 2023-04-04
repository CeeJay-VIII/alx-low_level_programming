#include "lists.h"

/**
 * free_listint2- Frees a linked list of listint_t nodes.
 * @head: A pointer to a pointer to the first node of the list.
 **/
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head != NULL)
{
current = *head;
*head = current->next;
free(current);
}
}
