#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int numero;
    int cuadrado;
    cout << "Entero ";
    cout << "Cuadrado ";
    cout << "Cubo\t" << endl;
    
    for (int i = 1; i<11; i++){
        cout << i << "\t"<< i*i << "\t" << i*i*i << endl;
    }
   
    return 0;
}
