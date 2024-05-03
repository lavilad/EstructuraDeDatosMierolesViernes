/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node *left, *right;
} Node;

Node* newNode(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

Node* insert(Node* root, int key) {
    if (root == NULL) {
        return newNode(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    }
    else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}

Node* invertTree(Node* root) {
    if (root == NULL) {
        return NULL;
    }
    // Intercambiar los hijos izquierdo y derecho recursivamente
    Node* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    return root;
}

int main() {
    Node* root = NULL;
    root = insert(root, 80);
    insert(root, 100);
    insert(root, 70);
    insert(root, 90);
    insert(root, 101);
    insert(root, 110);
    insert(root, 71);
    insert(root, 73);
    insert(root, 50);
    insert(root, 40);

    printf("Árbol en orden antes de invertir: ");
    inorder(root);
    printf("\n");

    // Invertir el árbol binario
    root = invertTree(root);

    printf("Árbol en orden después de invertir: ");
    inorder(root);
    printf("\n");

    printf("Árbol en postorden después de invertir: ");
    postorder(root);
    printf("\n");

    return 0;
}


