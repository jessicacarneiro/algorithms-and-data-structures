#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

LinkedList *create_list()
{
    LinkedList *new_list = malloc(sizeof(LinkedList *));
    return new_list;
}

void insert_node(LinkedList **list, int data)
{
    Node *new_node = create_node(data);

    if ((*list)->head == NULL)
    {
        (*list)->head = new_node;
    }
    else
    {
        (*list)->tail->next = new_node;
    }

    (*list)->tail = new_node;
}

Node *search_node(LinkedList *list, int data)
{
    Node *current_node = list->head;

    while (current_node != NULL && current_node->data != data)
    {
        current_node = current_node->next;
    }

    return current_node;
}

Node *delete_node(LinkedList **list, int data)
{
    // if list is empty, then there's nothing to delete
    if (is_empty(*list))
    {
        return NULL;
    }

    // check if node to be deleted is in the head of list
    if ((*list)->head->data == data)
    {
        Node *node_to_delete = (*list)->head;
        (*list)->head = (*list)->head->next;

        return node_to_delete;
    }

    Node *previous_node = (*list)->head;
    while (previous_node->next != NULL && previous_node->next->data != data)
    {
        previous_node = previous_node->next;
    }

    Node *node_to_delete = previous_node->next;
    previous_node->next = node_to_delete->next;

    // if node to delete is in tail, move tail to previous node
    if ((*list)->tail == node_to_delete)
    {
        (*list)->tail = previous_node;
    }

    return node_to_delete;
}

Node *update_node(LinkedList *list, int old_data, int new_data)
{
    Node *node_to_be_updated = search_node(list, old_data);
    node_to_be_updated->data = new_data;

    return node_to_be_updated;
}

void print_list(LinkedList *list)
{
    Node *current_node = list->head;

    while (current_node != NULL)
    {
        printf("%d->", current_node->data);
        current_node = current_node->next;
    }

    printf("null\n");
}

int is_empty(LinkedList *list)
{
    if (list->head == NULL)
    {
        return 1;
    }

    return 0;
}