#include <iostream>
using namespace std;
int main()
{
    int totalCompra;
    double compraUsuario;
    double descuento = 0;

    cout <<"Entra el total de la compra: ";
    cin >> totalCompra;

    cout <<"Entra la compra echa por el usuario: ";
    cin >> compraUsuario;

    if (totalCompra >= 150){
         descuento = compraUsuario * 0.15;
        cout <<"El cliente tiene derecho al descuento especial."<<endl;
    } else{
        
    }
    compraUsuario = compraUsuario - descuento;
    cout <<"El total de la compra es de: "<< compraUsuario;

    return 0;
}