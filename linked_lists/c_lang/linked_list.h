#ifndef __LINKED_LIST__
#define __LINKED_LIST__

#include "node.h"

struct LinkedList {
    struct Node* head;
    struct Node* tail;
};

struct LinkedList* create_list();

void insert_node(struct LinkedList** list, int data);

struct Node* search_node(struct LinkedList* list, int data);

struct Node* delete_node(struct LinkedList** list, int data);

struct Node* update_node(struct LinkedList* list, int old_data, int new_data);

void print_list(struct LinkedList* list);

int is_empty(struct LinkedList* list);

#endif