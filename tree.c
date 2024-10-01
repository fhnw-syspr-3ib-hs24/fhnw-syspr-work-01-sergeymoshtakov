#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct node {
        struct node *left;
        struct node *right;
        char *label;
    } Node;

int main(){
    struct node rln;
    rln.label = "right left node";
    rln.left = NULL;
    rln.right = NULL;

    struct node ln;
    ln.label = "left node";
    ln.left = NULL;
    ln.right = NULL;

    struct node rn;
    rn.label = "right node";
    rn.left = &rln;
    rn.right = NULL;

    struct node n;
    n.label = "root";
    n.left = &ln;
    n.right = &rn;

    struct node *root = &n;

    assert(root->left == &ln);
    assert(root->right == &rn);
    assert(root->right->left == &rln);
    assert(strlen(root->label)<32);

    // Node *node1 = malloc(sizeof(Node));
    // Node *node2 = malloc(sizeof(Node));
    // Node *node3 = malloc(sizeof(Node));

    // node1->right = node2;
    // strcpy(node1->label, "First node");
    
    // node2->left = node1;
    // node2->right = node3;
    // strcpy(node2->label, "Second node");

    // node3->left = node2;
    // strcpy(node3->label, "Third node");

    // free(node1);
    // free(node2);
    // free(node3);

    return 0;
}