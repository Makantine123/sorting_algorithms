#include "sort.h"
/**
 * insertion_sort_list - Insertion Sort for list
 * @list: list pointer
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *curt, *swap, *temp;

        if (!list || *list == NULL)
                return
        curt = *list;
        if (curt->next == NULL)
                return;
        while (curt->next != NULL)
        {
                swap = curt->next;

                if (curt->n > swap->n)
                {
                        temp = curt;
                        while (temp != NULL && temp->n > swap->n)
                        {
                                temp->next = swap->next;
                                if (temp->next != NULL)
                                        temp->next->prev = temp;
                                swap->prev = temp->prev;
                                if (swap->prev != NULL)
                                        swap->prev->next = swap;
                                else
                                        *list = swap;
                                temp->prev = swap;
                                swap->next = temp;
                                print_list(*list);
                                temp = swap->prev;
                        }
                        continue;
                }
                curt = curt->next;
        }
}
