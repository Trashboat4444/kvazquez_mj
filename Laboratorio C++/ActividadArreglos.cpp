#include <iostream>
using namespace std;

int main()
{
    
    int n; // Variable cantidad de elementos en el arreglo
    int suma = 0; // Variable Acumulador

    cout <<"Ingrese el numero de elementos en el arreglo: ";
    cin >> n;

    int arreglo[n]; //Arreglo n

    for (int i = 0; i < n; i++) // Ciclo For
    {   
        cout <<"Ingrese el numero del elemento " << i + 1 <<": ";
        cin >> arreglo[i];
    }
    
    for (int i = 0; i < n; i++) // Ciclo For Acumulador
    {
        suma = suma + arreglo[i]; //Acumulador
    }
    
    cout <<"La suma de los elementos es: "<< suma << endl; // Resultado del acumulador
    return 0;
}