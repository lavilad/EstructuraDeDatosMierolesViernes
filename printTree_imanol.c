//imprime el arbol, en forma de arbol volteado :)
void printTree_imanol(Node* root, int nivel)
{
    if (root == NULL)
        return;
    
    imprimirArbol(root->right, nivel + 1);
    
    for (int i = 0; i < nivel; i++)
        printf("    ");
    printf("-%d\n", root->key);
    
    imprimirArbol(root->left, nivel + 1);
}