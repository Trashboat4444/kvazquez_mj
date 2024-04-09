#include <iostream>
using namespace std;
int main()
{
    int suma = 0;
    int i;
    for (i = 1; i <= 100; i++)
    {
        suma = suma + i;
    }
    cout << "La suma de los numeros del 1 al 100 es: " << suma <<endl;

    return 0;
}