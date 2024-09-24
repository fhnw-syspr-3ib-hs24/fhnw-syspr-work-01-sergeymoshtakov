#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
        struct node *left;
        struct node *right;
        char label[32];
    } Node;

int main(){
    Node *node1 = malloc(sizeof(Node));
    Node *node2 = malloc(sizeof(Node));
    Node *node3 = malloc(sizeof(Node));

    node1->right = node2;
    strcpy(node1->label, "First node");
    
    node2->left = node1;
    node2->right = node3;
    strcpy(node2->label, "Second node");

    node3->left = node2;
    strcpy(node3->label, "Third node");

    free(node1);
    free(node2);
    free(node3);

    return 0;
}