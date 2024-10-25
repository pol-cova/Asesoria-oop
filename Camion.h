#ifndef OOP_CAMION_H
#define OOP_CAMION_H

#include "Auto.h"
#include <iostream>
using namespace std;

// Aqui le decimos que la clase Camion hereda de la clase Auto
class Camion : public Auto {
public:
// Constructor
// Auto(marca, modelo, color, anio) es el constructor de la clase padre
// carga es un atributo de la clase Camion
    Camion(string marca, string model, string color, string anio, float carga)
      : Auto(marca, model, color, anio), carga(carga) {}  

// Metodo para mostrar la información y sobreescribimos el método de la clase padre
    void mostrarInfo() override;

private:
    float carga;
};

#endif // OOP_CAMION_H