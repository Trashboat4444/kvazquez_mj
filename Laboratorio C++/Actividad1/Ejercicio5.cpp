#include <iostream>
using namespace std;

int main() {
    //Definir variables
    double area,base,altura;

    cout<<"Ingrese La base: ";
    cin >> base;

    cout<<"Ingrese la altura: ";
    cin >> altura;

    area = base * altura;

    cout<<"El area del rectangulo es: "<<area<<endl;

    return 0;
}