// Libreria de input y output
#include <iostream>
// Nuestras clases
// Clase padre
#include "Auto.h"
// Clase hija
#include "Camion.h"
using namespace std;
int main() {
    // Instancias de las clases
    Auto auto1("Toyota", "Corolla", "Rojo", "2021");
    Auto auto2("Nissan", "Sentra", "Azul", "2020");
    Camion camion1("Class", "F", "Negro", "2020", 3.5);
    cout << "Auto 1" << endl;
    auto1.mostrarInfo();
    cout << "Auto 2" << endl;
    auto2.mostrarInfo();
    cout << "Camion 1" << endl;
    camion1.mostrarInfo();
    return 0;
}
