#include <iostream>

int main() {

    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int permisos;

    std::cout << "Ingrese un valor entero (0-7): ";
    std::cin >> permisos;

    if (permisos < 0 || permisos > 7) {
        std::cout << "Valor invalido.\n";
        return 1;
    }

    std::cout << "Permisos activos:\n";

    if (permisos & LEER)
        std::cout << "- Leer\n";

    if (permisos & ESCRIBIR)
        std::cout << "- Escribir\n";

    if (permisos & EJECUTAR)
        std::cout << "- Ejecutar\n";

    if (permisos == 0)
        std::cout << "Ninguno\n";

    return 0;
}
