#include <iostream>

class Telefono {
public:
	// Constructor que no pide parametros al crear el objeto
	Telefono() {
		std::cout << "Un telefono se ha creado satisfactoriamente!" << std::endl;
	}
};

int main (){
	// Creamos una instancia del objeto
	Telefono nuevoTelefono;

}