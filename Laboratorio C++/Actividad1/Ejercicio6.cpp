#include <iostream>
using namespace std;

int main() {
    //Definir variables
    double area,base,altura,perimetro;

    cout<<"Ingrese La base: ";
    cin >> base;

    cout<<"Ingrese la altura: ";
    cin >> altura;

    area = base * altura;
    perimetro = (2 * altura) + (2 * base);

    cout<<"El area del rectangulo es:"<<area<<endl;

    cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;

    return 0;
}