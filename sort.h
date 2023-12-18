#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*Comparison directions macro for bitonic sort*/
#define UP 0
#define DOWN 1

/*enum bool - this enumeration of boolean value*/
typedef enum bool
{
    false = 0,
    true
} bool;


/**
 * struct listint_s - this doubly linked list node
 *
 * @n: Integer stored in this node
 * @prev: Pointer to this previous element of this list
 * @next: Pointer to this next element of this list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*Helper for swapp*/
void swap_ints(int *a, int *b);

/*Printin helper function*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*Regular function proto type*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);



#endif
