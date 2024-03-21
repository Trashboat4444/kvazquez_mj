#include <iostream>
using namespace std;

int main () {
    //Definir variables
    double distancia,velocidad,tiempo;

    cout<<"Ingrese la velocidad promedio: ";
    cin >> velocidad;

    cout<<"Ingrese el tiempo de viaje: ";
    cin >> tiempo;

    distancia = velocidad * tiempo;

    cout<<"La distancia total rocorrida es: "<<distancia<<endl;

    return 0;
}