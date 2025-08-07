// (Calculadora del indice de masa corporal)
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    float bmi;
    float peso;
    float altura;

    cout << "Ingresar el peso en kg ";
    cin >> peso;
    
    cout << "Ingresar la altura en metros ";
    cin >> altura;
    
    cout << "Peso de: " << peso << endl << "Altura de: " << altura << endl;

    // BMI
    bmi = (peso)/(altura*altura);

    if (bmi < 18.5){
        cout << "El indice corporal de masa es: " << bmi << "Estás bajo peso" << endl;
    }
    if (bmi <= 18.5 || bmi < 24.9){
        cout << "El indice corporal de masa es: " << bmi << "Estás en el peso normal" << endl;
    }
    if (bmi <= 25 || bmi < 29.9){
        cout << "El indice corporal de masa es: " << bmi << "Estás sobre peso" << endl;
    }else {
        cout << "El indice corporal de masa es: " << bmi << "Estás obeso!" << endl;
    }


   


    return 0;
}
