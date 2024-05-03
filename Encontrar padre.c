
// Función para encontrar el padre de un nodo en el árbol
Node* findParent(Node* root, int key) 
{
    // Si el árbol está vacío o si el nodo es la raíz, no tiene padre
    if (root == NULL || root->key == key) 
    {
        printf("El nodo raíz no tiene padre o el árbol está vacío.\n");
        return NULL;
    }

    // Buscar el nodo padre con recursividad
    if (key < root->key) 
    {
        // Buscar en el lado izquierdo si el valor es menor
        if ((root->left != NULL) && (root->left->key == key)) 
        {
            printf("El nodo padre de %d es %d.\n", key, root->key);
            return root;
        }
        return findParent(root->left, key);
    } else if (key > root->key) 
    {
        // Buscar en el lado derecho si el valor es mayor
        if ((root->right != NULL) && (root->right->key == key)) 
        {
            printf("El nodo padre de %d es %d.\n", key, root->key);
            return root;
        }
        return findParent(root->right, key);
    }
    // Si no se encuentra el padre, regresar NULL
    return NULL;
}


   // parte que va en el main
   // Llamar a la función findParent para encontrar el nodo padre de un nodo específico
    int nodo_a_buscar = 10;
    Node* nodo_padre = findParent(root, nodo_a_buscar);
    if (nodo_padre != NULL) 
    {
        printf("El nodo padre de %d es %d.\n", nodo_a_buscar, nodo_padre->key);
    } else 
    {
        printf("El nodo %d no tiene padre o es la raíz del árbol.\n", nodo_a_buscar);
    }
   










