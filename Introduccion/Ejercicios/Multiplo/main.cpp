#include <iostream>

int main() {
    std::cout << "Bienvenido!" << std::endl;

    int num1 = 0;
    int num2 = 0;
    std::cout << "Ingrese un número mayor" << std::endl;;
    std::cin >> num1;

    std::cout << "Ingresa un número menor al primero" << std::endl;;
    std::cin >> num2;

    if (num1%num2 == 0){
        std::cout << num2 << " es multiplo de: " << num1 << std::endl;
    } else {
        std::cout << "No es multiplo" << std::endl;
    }

    
    return 0;
}
