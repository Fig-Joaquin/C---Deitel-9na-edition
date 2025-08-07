#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Bienvenido!" << endl;

    int a;
    int b;
    int c;

    cout << "Ingrese 3 numeros, usar el espacio para separación de estos." << endl;
    cin >> a >> b >> c;
    
    cout << "La suma es: " << a+b+c << endl;
    cout << "El promedio es: " << (a+b+c)/3 << endl;
    cout << "El producto es: " << (a*b*c) << endl;
    if (a<b){
        if (a<c){
            cout << "El numero: " << a << " es el menor" << endl;
        }
    } else {
        if (b<c){
            cout << "El numero: " << b << " es el menor" << endl;
        } else {
            cout << "El numero: " << c << " es el menor" << endl;

        }
    }


    return 0;
}
