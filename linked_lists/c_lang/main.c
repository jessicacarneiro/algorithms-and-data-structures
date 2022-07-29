#include <stdlib.h>
#include <stdio.h>

#include "node.h"
#include "linked_list.h"

int main(int argc, char **argv) {
    struct LinkedList* list = create_list();
    insert_node(&list, 5);
    insert_node(&list, 3);
    insert_node(&list, 9);
    insert_node(&list, 0);
    insert_node(&list, 2);
    insert_node(&list, 1);

    // 5->3->9->0->2->1->null
    print_list(list);
    printf("============================\n");

    struct Node* deleted_node = delete_node(&list, 0);
    printf("Deleted node: %d\n", deleted_node->data);
    printf("Head: %d\n", list->head->data);
    printf("Tail: %d\n", list->tail->data);

    // 5->3->9->2->1->null
    print_list(list);
    printf("============================\n");


    deleted_node = delete_node(&list, 5);
    printf("Deleted node: %d\n", deleted_node->data);
    printf("Head: %d\n", list->head->data);
    printf("Tail: %d\n", list->tail->data);

    // 3->9->2->1->null
    print_list(list);
    printf("============================\n");

    deleted_node = delete_node(&list, 1);
    printf("Deleted node: %d\n", deleted_node->data);
    printf("Head: %d\n", list->head->data);
    printf("Tail: %d\n", list->tail->data);

    // 3->9->2->null
    print_list(list);
    
    return 0;
}