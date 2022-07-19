#ifndef __SORT_H__
#define __SORT_H__
#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

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
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
listint_t *get_tail(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);

void quick_sort_hoare(int *array, size_t size);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);

void bitonic_sort(int *array, size_t size);
void sort_deck(deck_node_t **deck);


#endif
