#include <iostream>
using namespace std;

int main()
{
    string estadoTargeta;
    cout<<"Ingrese el estado de la targeta(A para activa, I para Inactiva)"; //Ingresar letra
    cin>>estadoTargeta;

    if(estadoTargeta == "A" || estadoTargeta == "a") //Verifica si la target esta activa
    cout<<"La targeta esta activa, se permiten hacer prestamos"<<endl; //mensaje
    else if (estadoTargeta == "I" || estadoTargeta == "i") //La targeta esta inactiva
    cout<<"La targeta esta inactiva, no se permite hacer prestamos"<<endl; //mensaje

    return 0;
}