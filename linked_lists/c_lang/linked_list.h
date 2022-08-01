#ifndef __LINKED_LIST__
#define __LINKED_LIST__

#include "node.h"

typedef struct
{
    Node *head;
    Node *tail;
} LinkedList;

LinkedList *create_list();

void insert_node(LinkedList **list, int data);

Node *search_node(LinkedList *list, int data);

Node *delete_node(LinkedList **list, int data);

Node *update_node(LinkedList *list, int old_data, int new_data);

void print_list(LinkedList *list);

int is_empty(LinkedList *list);

#endif