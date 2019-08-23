//
// Created by Fabrizio Vásquez on 8/21/19.
//

#ifndef INC_01_01_FIGURA_H
#define INC_01_01_FIGURA_H

#include "iostream"
#include "cmath"
#include "Variables_globalesFG.h"

typedef float f;

using namespace std;

class Figura {
protected:

    int x=0;
    int y=0;

public:
    Figura(){}

    virtual float Otener_area() = 0;
    virtual void Pedir_datos() = 0;
    virtual void Verificar() = 0;


    int getX(f x);
    int getY(f y);


    void setX(f x);
    void setY(f y);

    ~Figura(){}
};


#endif //INC_01_01_FIGURA_H
