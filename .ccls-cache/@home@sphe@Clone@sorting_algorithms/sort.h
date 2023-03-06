#ifndef SORT_H
#define SORT_H

/* Built-in libraries */
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/**
 * enum bool - Enumeration of Boolean values
 * @false: Equals 0
 * @true: Equals 1
 */
typedef enum bool
{
	false = 0;
	true
} bool;

/** Function Prototype **/
void print_array(const  int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

/** Custom functions **/
void _swap(int *arr, int fist, int second, int size);
int _partition(int *arr, int low, int high, size_t size);
void _quicksort(int *arr, int low, int high, size_t size);
void myswap1_cocktail(listint_t **list, listint_t **tail, listint_t **actN);
void myswap2_cocktail(listint_t **list, listint_t **tail, listint_t **actN);

#endif
