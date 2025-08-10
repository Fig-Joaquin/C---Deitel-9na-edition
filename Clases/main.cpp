#include <iostream>
//#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class LibroCalificaciones {
private:
    string nombreCurso; // atributo privado para almacenar el nombre del curso

public:
    // Función const porque solo muestra datos, no modifica nada
    void mostrarMensaje() const {
        cout << "Bienvenido al curso " << nombreCurso << endl;
    }

    // Función NO const porque modifica el atributo nombreCurso
    void establecerNombreCurso(string nombre) {
        nombreCurso = nombre;
    }

    // Función const porque solo retorna un valor, no modifica nada
    string obtenerNombreCurso() const {
        return nombreCurso;
    }
};

int main() {
    
    // Instanciar a la clase 
    LibroCalificaciones miPrimerLibro;

    string nombreDelCurso;
    cout << "Escriba el nombre del curso: " << endl;
    
    // pide y recibe el nombre del curso como entrada
    getline(cin, nombreDelCurso);
    // establece el nombre del curso
    miPrimerLibro.establecerNombreCurso(nombreDelCurso);
    // muestra el mensaje de bienvenida
    miPrimerLibro.mostrarMensaje();


    return 0;
}
