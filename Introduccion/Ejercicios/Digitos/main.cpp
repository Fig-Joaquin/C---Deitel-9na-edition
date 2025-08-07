#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int numero;
    cout << "Ingrese un numero de 5 digitos: ";
    cin >> numero;

    // Extraer cada dígito usando división y módulo
    int digito1 = numero / 10000;         // Primer dígito
    int digito2 = (numero / 1000) % 10;   // Segundo dígito
    int digito3 = (numero / 100) % 10;    // Tercer dígito
    int digito4 = (numero / 10) % 10;     // Cuarto dígito
    int digito5 = numero % 10;            // Quinto dígito

    // Imprimir los dígitos separados por tres espacios
    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;

    return 0;
}
