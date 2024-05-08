//FUNCION SUMAR
int Sumar(Node* root)
{
    if(root!=NULL)
    {
        //Creamos la variabele suma
        int suma = root->key;
        //Realizamos la suma del lado izquierdo al derecho por medio de recursividad
        suma += Sumar(root->left);
        suma += Sumar(root->right);
        
        //Devolvemos suma
        return suma;
    }
    
    
}