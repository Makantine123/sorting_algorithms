#include "sort.h"
/**
 * _myswap_cocktail - Swap nodes
 * @node: Node
 * @list: list head
 * Return: No return
 */
void _myswap_cocktail(listint_t **node, listint_t **list)
{
	listint_t *temp, *temp2, *temp3;

	if (!(*node)->prev)
	{
		*list = (*node)->next;
	}

	temp = temp3 = *node;
	temp2 = temp->next;




/**
 * cocktail_sort_list - Sorts a double linked list of integers in asc. order
 * using Cocktail shaker sort
 * :@list: list pointer
 * Return: Nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *head, *aux;
	int c, n, m;

	c = 0, n = -1, m = -1;

	if (!(*list) || (!((*list)->prev) && !((*list)->next)))
	{
		return;
	}

	head = *list;
	while (m >= n)
	{
		n++;
		while (head->next && c != m)
		{
			if (head->n > head->next->n)
			{
				aux = head;
				_myswap_cocktail(&aux, list);
				print_list(*list);
				head = aux;
			}
			c++;
			head = head->next;
		}
		if (n == 0)
		{
			m = c;
			m--;
		}
		while (head->prev && c >= n)
		{
			if (head->n < head->prev->n)
			{
				aux = head->prev;
				_myswap_cocktail(&aux, list);
				print_list(*list);
				head = aux->next;
			}
			c--;
			head = head->prev;
		}
	}
}
