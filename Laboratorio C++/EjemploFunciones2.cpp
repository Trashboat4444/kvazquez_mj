#include <iostream>
#include <string> // Incluimos la biblioteca para manejar objetos de tipo string
using namespace std;

// Definición de la función Saludar que recibe un parámetro de tipo string
void Saludar(string nombre)
{
    cout<<"¡Hola " << nombre << "!" << endl;
}
int main()
{
    // Llamada a la función Saludar con el argumento "Juan"
    Saludar("Juan");
    return 0;
}