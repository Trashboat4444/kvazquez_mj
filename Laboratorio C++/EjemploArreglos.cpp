#include <iostream>
using namespace std;

int main()
{
    //Definir el arreglo con el elementos y asignar valores directamente
    int array[5] = {6,7,8,9,10};

    //Imprimir los elementos del arreglo
    cout <<"Elementos de arreglo"<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<"Elemento "<< i + 1 <<" : "<< array[i]<< endl;
    }
    return 0;
    
}