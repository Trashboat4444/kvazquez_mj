#include <iostream>
using namespace std;

int main() {

    //Definir variables
    double examen1, examen2, examen3, examen4, promedio;

    cout<< "Ingrese la nota del primer examen: ";
    cin >> examen1;

    cout<< "Ingrese la nota del segundo examen: ";
    cin >> examen2;

    cout<< "Ingrese la nota del tercer examen: ";
    cin >> examen3;

    cout<< "Ingrese la nota del cuarto examen: ";
    cin >> examen4;

    promedio = (examen1 + examen2 + examen3 + examen4) /4;

    cout<< "El promedio final de los cuatro de examenes es: "<<promedio<<endl;

    return 0;
}