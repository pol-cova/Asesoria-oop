//
// Created by Paul Contreras on 25/10/24.
//

#ifndef OOP_AUTO_H
#define OOP_AUTO_H

#include <iostream>
using namespace std;

class Auto {
public:
    // Constructor
    Auto(string marca, string modelo, string color, string anio)
    : marca(marca), modelo(modelo), color(color), anio(anio) {}
    // Getters
  void virtual mostrarInfo();

private:
// Atributos
    string marca;
    string modelo;
    string color;
    string anio;

};

#endif //OOP_AUTO_H
