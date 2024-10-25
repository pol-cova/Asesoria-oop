//
// Created by Paul Contreras on 25/10/24.
//

#include "Camion.h"
#include <iostream>

void Camion::mostrarInfo() {
    Auto::mostrarInfo(); // Llamada al método mostrarInfo de la clase padre es decir la original que esta en Auto.cpp
    // Impresión del atributo carga en adicion a los atributos de la clase padre
    std::cout << "Carga: " << carga << "Ton" << std::endl;
}

