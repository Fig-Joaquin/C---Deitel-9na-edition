#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class LibroCalificaciones {
private:
    string nombreCurso; // atributo privado para almacenar el nombre del curso

public:
    // Constructor inicializa a nombreCurso con la cadena que se suministsra como argumento
    // Al usar el constructor, el objeto requerira de los argumentos necesarios para crear una instancia
    explicit LibroCalificaciones( string nombre ) 
        : nombreCurso(nombre) // Inicializador de miembro para inicializar
    {
        // Cuerpo vacío
    }

    // Función const porque solo muestra datos, no modifica nada
    void mostrarMensaje() const {
        cout << "Bienvenido al curso " << nombreCurso << endl;
    }

    // Función NO const porque modifica el atributo nombreCurso
    void establecerNombreCurso( string nombre ) {
        nombreCurso = nombre;
    }

    // Función const porque solo retorna un valor, no modifica nada
    string obtenerNombreCurso() const {
        return nombreCurso;
    }
};

int main() {
    
    // Instanciar a la clase 
    LibroCalificaciones miPrimerLibro("Historia"); // Construímos el objeto y pasamos el argumento al constructor
    LibroCalificaciones segundoLibro("Matematicas");


    string nombreDelCurso;
    cout << "Escriba el nombre del curso: " << endl;
    
    // pide y recibe el nombre del curso como entrada
    getline(cin, nombreDelCurso);
    // establece el nombre del curso
    miPrimerLibro.establecerNombreCurso(nombreDelCurso);
    // muestra el mensaje de bienvenida
    miPrimerLibro.mostrarMensaje();
    // Uso de la función miembro.
    cout << "Segundo libro: " << segundoLibro.obtenerNombreCurso() << endl;



    return 0;
}
