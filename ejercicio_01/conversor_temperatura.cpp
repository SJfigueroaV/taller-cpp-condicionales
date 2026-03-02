#include <iostream>
#include <iomanip> //Libreria para utilizar set presicion

int main() {
    double Celsius, Fahrenheit, Kelvin, Rankline;

    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> Celsius;

    // Conversiones

    Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0;
    Kelvin = Celsius + 273.15;
    Rankline = (Celsius + 273.15) * 9.0 / 5.0;
    
    // Imprimir Solamente 2 Numeros Decimales
    std::cout << std::fixed << std::setprecision(2);

    // Resultado Conversiones

    std::cout << "Temperatura en Fahrenheit: " << Fahrenheit << std::endl;
    std::cout << "Temperatura en Kelvin: " << Kelvin << std::endl;
    std::cout << "Temperatura en Rankine: " << Rankline << std::endl;

    return 0;
}
