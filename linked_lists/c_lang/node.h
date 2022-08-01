#ifndef __NODE_H__
#define __NODE_H__

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *create_node(int data);

void print_node(Node node);

#endif