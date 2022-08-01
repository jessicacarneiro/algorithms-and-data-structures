#include <stdlib.h>
#include <stdio.h>

#include "node.h"

Node* create_node(int data) {
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    return new_node;
}

void print_node(Node node) {
    printf("%d\n", node.data);
}
