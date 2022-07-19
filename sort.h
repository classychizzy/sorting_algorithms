#ifndef __SORT_H__
#define __SORT_H__
#include <stdio.h>
#include <stdlib.h>
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

/*helper functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*sorting algorithms*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
listint_t *get_tail(listint_t **list);
void swap_nodes(listint_t **list, listint_t *l, listint_t *r);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void swap_items(int *array, size_t l, size_t r);
void sift_down(int *array, int arr_size, int size, int pos);
void build_max_heap(int *array, int size);
void heap_sort(int *array, size_t size)
void radix_sort(int *array, size_t size);

#endif
