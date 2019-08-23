//
// Created by Fabrizio Vásquez on 8/22/19.
//

#ifndef INC_01_01_FIGURACOMPUESTA_H
#define INC_01_01_FIGURACOMPUESTA_H

#include "Figura.h"
#include "iostream"

using namespace std;

class FiguraCompuesta {
private:
    Figura *figuraCompuesta;

public:
    void Obtener_centroide();
    void Obtener_data();

};


#endif //INC_01_01_FIGURACOMPUESTA_H
