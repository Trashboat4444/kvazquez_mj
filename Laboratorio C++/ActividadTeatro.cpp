#include <iostream>
using namespace std;
int main()
{
    int miembroTeatro;
    int numeroEntrada;

    cout <<"Es miembro del teatro? ( 1 = si, 0 = no): ";
    cin >> miembroTeatro;
    cout <<"Ingrese la cantidad de entradas que quiere comprar: ";
    cin >> numeroEntrada;

    if (miembroTeatro){
        if (numeroEntrada > 5){
            cout <<"Se aplica descuento de 15%"<<endl;
        }else{
            cout <<"Se aplica descuento de 10%"<<endl;
        }
    }else{
        if (numeroEntrada > 10){
            cout <<"Se aplica descuento de 5%"<<endl;
        }else{
            cout <<"No se aplica descuento"<<endl;
        }
    }
        
    return 0;
    
}