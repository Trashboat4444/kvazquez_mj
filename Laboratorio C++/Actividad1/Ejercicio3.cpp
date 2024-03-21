#include <iostream>
using namespace std;

int main() {
    //Definir variables
    double edad,fechaNacimiento,fechaActual;

    cout<<"Ingrese el año de nacimiento: ";
    cin >> fechaNacimiento;

    cout<<"Ingrese el año actual: ";
    cin >> fechaActual;

    edad = fechaActual - fechaNacimiento;

    cout<<"La edad aproximada es: "<<edad<<endl;

    return 0;
}