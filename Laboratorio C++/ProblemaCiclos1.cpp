#include <iostream>
#include <string>

using namespace std;
int main()
{
    string nombre; //El nombre del usuario

    cout <<"Ingrese su nombre: ";
    cin >> nombre;

    for (int i = 1; i < 10; i++) //
    {
        cout<<"Hola " << nombre <<endl;
    }
    return 0;
}