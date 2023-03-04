#include "sort.h"
/**
 * insertion_sort_list - Insertion Sort for list
 * @list: list pointer
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *sorted, *curr, *next, *temp, *aux;

        sorted = NULL;
        curr = *list;

        while (curr != NULL)
        {
                next = curr->next;

                if (sorted == NULL || sorted->n > curr->n)
                {
                        curr->next = sorted;
                        sorted = curr;
                }
                else
                {
                        aux = sorted;

                        while (aux->next != NULL && aux->next->n <= curr->n)
                        {
                                aux = aux->next;
                        }
                        if (aux->next == NULL)
                        {
                                aux->next = curr;
                                curr->prev = aux;
                                curr->next = NULL;
                        }
                        else
                        {
                                temp = aux->next;
                                aux->next = curr;
                                curr->prev = aux;
                                curr->next = temp;
                                temp->prev = curr;
                        }
                }
                print_list(curr);
                curr = next;
        }
        *list = sorted;
}
