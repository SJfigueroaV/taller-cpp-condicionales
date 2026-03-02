#include <iostream>
#include <cmath>

int main() {

    double a, b, resultado;
    char operador;

    std::cout << "Primer numero: ";
    std::cin >> a;

    std::cout << "Operador (+, -, *, /, %): ";
    std::cin >> operador;

    std::cout << "Segundo numero: ";
    std::cin >> b;

    switch (operador) {

        case '+':
            resultado = a + b;
            std::cout << "Resultado: " << resultado << "\n";
            break;

        case '-':
            resultado = a - b;
            std::cout << "Resultado: " << resultado << "\n";
            break;

        case '*':
            resultado = a * b;
            std::cout << "Resultado: " << resultado << "\n";
            break;

        case '/':
            if (b == 0) {
                std::cout << "Error: division por cero.\n";
            } else {
                resultado = a / b;
                std::cout << "Resultado: " << resultado << "\n";
            }
            break;

        case '%':
            if (b == 0) {
                std::cout << "Error\n";
            } else {
                resultado = fmod(a, b);
                std::cout << "Resultado: " << resultado << "\n";
            }
            break;

        default:
            std::cout << "Operacion invalida\n";
    }

    return 0;
}
