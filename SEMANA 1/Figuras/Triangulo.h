//
// Created by Fabrizio Vásquez on 8/21/19.
//

#ifndef INC_01_01_TRIANGULO_H
#define INC_01_01_TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura{
private:
    Figura *triguanlito;

public:

    float Otener_area() override;
    void Pedir_datos() override;
    void Verificar() override;

};


#endif //INC_01_01_TRIANGULO_H
