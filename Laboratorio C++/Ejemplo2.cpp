int main() {
    int entero;
    float flotante;
    char caracter;
    std::string cadena;

    std::cout <<"Ingrese un Numero entero: ";
    std::cin >> entero;

    std::cout <<"Ingrese un numero flotante:";
    std::cin >> flotante;

    std::cout << "Ingrese una cadena de caracteres: ";
    std::cin.ignored(); //ignorar el '\n' dejado por // std:cin >>caracter
    std::getline(std::cin,cadena);

    return 0;

}