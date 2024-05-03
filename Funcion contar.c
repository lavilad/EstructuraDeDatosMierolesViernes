// E la funcion para contar los valores en la parte del arbol izquierda
int contarIzquierda(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    return 1 + contarIzquierda(root->left) + contarIzquierda(root->right->left);
}

// Es la funcion para contar los valores en la parte del arbol derecho
int contarDerecha(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    return 1 + contarDerecha(root->right) + contarDerecha(root->left->right);
}
