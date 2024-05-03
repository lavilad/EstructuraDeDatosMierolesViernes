// Función para buscar un elemento en el árbol binario de búsqueda
struct TreeNode* search(struct TreeNode* root, int data) {
  
    // Si el árbol está vacío o la raíz es igual al elemento buscado
    if (root == NULL || root->key == data){
      if (root != NULL)
          printf("Nodo encontrado: %d\n", root->key);
      else
          printf("Nodo no encontrado\n");
      return root;
    }

    // Si el elemento es mayor que el nodo actual, buscar en el subárbol derecho
    if (root->key < data)
        return search(root->right, data);

    // Si el elemento es menor que el nodo actual, buscar en el subárbol izquierdo
    return search(root->left, data);
}