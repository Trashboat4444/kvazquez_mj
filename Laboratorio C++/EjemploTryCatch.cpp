#include <iostream>
using namespace std;

int main()
{
    int numerador, denominador,resultado;
    cout <<"Ingrese el numerador: ";
    cin >>numerador;
    cout <<"Ingrese el denomiador: ";
    cin >> denominador;

    try
    {
        if (denominador == 0)
        {
            throw "Division por cero no permitida";//mensaje que describe el problema
        }
        resultado = numerador/denominador;

        cout <<"Resultado: "<<resultado<<endl;
    }
    catch (const char* mensaje)
    {
        cout <<"Excepcion capturada: "<<mensaje<<endl;
    }
    return 0;

}