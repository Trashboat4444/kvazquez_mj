using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
           string nombre; //El nombre del usuario
           int n = 0;

            Console.Write ("Ingrese su nombre: ");
             nombre = Console.ReadLine();

            while (n <= 10)
            {
                Console.WriteLine($"Hola {nombre}");
                n = n + 1;
            }
        }
    }
}

