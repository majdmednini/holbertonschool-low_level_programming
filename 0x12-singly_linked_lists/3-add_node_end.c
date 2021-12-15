#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *@head: list_t pointer to a structure node
 *@str: constant pointer to a string
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *s;
int i, len = 0;
list_t *new_node = malloc(sizeof(list_t));
list_t *curr = *head;
s = strdup(str);
for (i = 0; *(str + i) != '\0'; i++)
{
len = i + 1;
}
if (new_node == NULL)
{
return (NULL);
}
new_node->str = s;
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = new_node;
}
return (new_node);
}
