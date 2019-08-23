//
// Created by Fabrizio Vásquez on 8/21/19.
//

#ifndef INC_01_01_CIRCULO_H
#define INC_01_01_CIRCULO_H

#include "Figura.h"
#include "Variables_globalesC.h"
#define PI 3.14159


class Circulo : public Figura {

private:
    Figura *circulito;


public:

    void Pedir_datos() override;
    float Otener_area() override ;
    void Verificar() override;

};


#endif //INC_01_01_CIRCULO_H
