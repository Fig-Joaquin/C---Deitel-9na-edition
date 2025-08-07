#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class LibroCalificaciones {
    public : 
    void mostrarMensaje() const {
        cout << "Bienvenido al libro de calificaciones" << endl;
    }
};

int main() {

   LibroCalificaciones miPrimerLibro;

   miPrimerLibro.mostrarMensaje();


    return 0;
}
