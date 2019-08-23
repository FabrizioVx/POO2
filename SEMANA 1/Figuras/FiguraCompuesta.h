//
// Created by Fabrizio Vásquez on 8/22/19.
//

#ifndef INC_01_01_FIGURACOMPUESTA_H
#define INC_01_01_FIGURACOMPUESTA_H

#include "Figura.h"
#include "iostream"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Circulo.h"


using namespace std;

class FiguraCompuesta {
private:
    Figura *figuraCompuesta;

public:
    void Obtener_centroide();
    void Obtener_data();

};


#endif //INC_01_01_FIGURACOMPUESTA_H
