/**
 * delete_nodeint_at_index - deletes node at index of listint_t linked list
 * @head: pointer to pointer to head node of listint_t list
 * @index: index of node to delete (starting from 0)
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;
if (*head == NULL)
return (-1);
current = *head;
prev = NULL;
for (i = 0; i < index && current != NULL; i++)
{
prev = current;
current = current->next;
}
if (i != index)
return (-1);
if (prev == NULL)
*head = current->next;
else
prev->next = current->next;
free(current);
return (1);
}
