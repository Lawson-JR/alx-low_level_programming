#include "lists.h"

/**
 * free_listint - frees a listint_ list
 * @head: listint_t list to be freed
 */

void free_list(list_t *head)
{
        listint_t *temp;

        while (head)
        {
                temp = head->next;
                free(head->str);
                free(head);
                head = temp;
        }
}
