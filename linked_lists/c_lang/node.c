#include <stdlib.h>
#include <stdio.h>

#include "node.h"

struct Node* create_node(int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    return new_node;
}

void print_node(struct Node node) {
    printf("%d\n", node.data);
}
