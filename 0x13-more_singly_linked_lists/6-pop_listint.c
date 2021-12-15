#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *@head: listint_t pointer to a list node.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
int x = 0;
listint_t *temp;
if (*head == NULL)
return (0);
temp = *head; /* take the same adress as head*/
*head = (*head)->next;
if (temp == NULL)
{
free(temp);
return (0);
}
else
{
x = temp->n;
free(temp);
return (x);
}
return (0);
}
