#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout<<"Bienvenido a Johanna's Cafe: "<<endl;
    cout<<"MENU"<<endl;
    cout<<"1. Cafe"<<endl;
    cout<<"2. Te"<<endl;
    cout<<"3. Chocolate Caliente"<<endl;
    cout<<"4. Jugo de Naranja"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Por favor seleccione su bebida: "<<endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Cafe
        cout<<"El precio del cafe es $2"<<endl;
        break;
    
    case 2: //Te
        cout<<"El precio del te es $1.50"<<endl;
        break;

    case 3: //Chocolate Caliente
        cout<<"El precio del Chocolate Caliente es $2.50"<<endl;
        break;

    case 4: //Jugo de Naranja
        cout<<"El precio del Judo de Naranja es $3"<<endl;
        break;

    default: //En caso de que el usuario ingrese una opcion no valida
        cout<<"Opcion NO valida. Por favor, seleccione una bebida del menu"<<endl;
    }

    return 0;
}