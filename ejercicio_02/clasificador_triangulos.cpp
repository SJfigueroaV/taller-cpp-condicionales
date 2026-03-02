#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese los tres lados: ";
    cin >> a >> b >> c;

    // Verificar si es valido
    if (a + b > c && a + c > b && b + c > a) {

        cout << "Es un triangulo valido.\n";

        // Clasificar por lados

        if (a == b && b == c) {
            cout << "Equilatero\n";
        } 
        else if (a == b || a == c || b == c) {
            cout << "Isosceles\n";
        } 
        else {
            cout << "Escaleno\n";
        }

        // Ordenar lados

        double mayor = a;

        if (b > mayor) mayor = b;
        if (c > mayor) mayor = c;

        double sumaCuadrados;

        if (mayor == a)
            sumaCuadrados = pow(b,2) + pow(c,2);
        else if (mayor == b)
            sumaCuadrados = pow(a,2) + pow(c,2);
        else
            sumaCuadrados = pow(a,2) + pow(b,2);

        if (sumaCuadrados == pow(mayor,2))
            cout << "Rectangulo\n";
        else if (sumaCuadrados > pow(mayor,2))
            cout << "Acutangulo\n";
        else
            cout << "Obtusangulo\n";

    } else {
        cout << "No es un triangulo valido.\n";
    }

    return 0;
}
