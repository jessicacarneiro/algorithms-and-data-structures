#ifndef __NODE_H__
#define __NODE_H__

struct Node {
    int data;
    struct Node* next;
};

struct Node* create_node(int data);

void print_node(struct Node node);

#endif