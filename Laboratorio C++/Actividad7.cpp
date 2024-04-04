#include <iostream>
using namespace std;

int main()
{
    int instrumento; //La variable es el intrumento que se va a seleccionar

    cout<<"Ingrese el tipo de Intrumento"<<endl;
    cout<<"1. Guitarra, 2. Piano, 3. Bateria, 4. Violin, 5. Flauta"<<endl;
    cin>> instrumento;

    switch (instrumento)
    {
    case 1: //Guitarra
        cout<<"El descuento es del 10%."<<endl;
        break;
    
    case 2: //Piano
        cout<<"El descuento es del 15%."<<endl;
        break;

    case 3: //Bateria
        cout<<"El descuento es del 20%."<<endl;
        break;

    case 4: //Violin
        cout<<"El descuento es del 12%."<<endl;
        break;
        
    case 5: //Flauta
        cout<<"El descuento es del 8%."<<endl;
        break;
    
    default: //En caso de que el usuario ingrese una opcion no valida
        cout<<"Opcion NO valida. Por favor, seleccione una Intrumento"<<endl;
    }

    return 0;
}