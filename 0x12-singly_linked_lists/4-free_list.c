#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that  frees a list_t list.
 *@head: list_t
 */
void free_list(list_t *head)
{
list_t *aux;
while (head != NULL)
{
aux = head;
head = head->next;
free(aux->str);
free(aux);
}
head = NULL;
free(head);
}
