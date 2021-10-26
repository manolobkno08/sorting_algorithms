#include "sort.h"

/**
 * insertion_sort_list - Insertion
 * @list: List
 * Return: Always 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *temp = NULL, *temp2 = NULL;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->prev;
		temp2 = current;
		current = current->next;

		while (temp != NULL)
		{
			if (temp->n > temp2->n)
			{
				if (temp->prev != NULL)
				{
					temp->prev->next = temp2;
				}
				else if (temp->prev == NULL)
				{
					*list = temp;
				}
				if (temp2->next != NULL)
				{
					temp2->next->prev = temp;
				}
				temp->next = temp2->next;
				temp2->prev = temp->prev;
				temp->prev = temp2;
				temp2->next = temp;
				temp = temp2->prev;

				if (temp2->prev == NULL)
				{
					*list = temp2;
				}
				print_list(*list);
			}
			else
			{
				temp2 = temp;
				temp = temp->prev;
			}
		}
	}
}