#include <iostream>
using namespace std;

double calcularSueldo(double ventas) ; // Definir Funcion

int main()
{
    double ventas, sueldo;

    cout << "Introduce la cantidad generada en ventas: ";
    cin >> ventas;

    if (ventas < 0)
    {
        cout << "La cantidad introducida no es valida"; // Mensaje de error
        return 0;
    }

    sueldo = calcularSueldo(ventas); // Llamada a la funcion
    
    cout << "El sueldo a pagar es: " << sueldo << endl;
    return 0;
}
double calcularSueldo(double ventas) // Funcion
{
   double sueldo;

   sueldo = ventas * 0.15;

    if (ventas >= 1500)
    {
        sueldo += 125;
    }
    return sueldo;
}