//
// Created by Fabrizio Vásquez on 8/21/19.
//

#ifndef INC_01_01_RECTANGULO_H
#define INC_01_01_RECTANGULO_H

#include "Figura.h"


class Rectangulo: public Figura {

private:
    Figura *rectangulito;

public:
  Rectangulo(){
  }

  void Pedir_datos() override;
  float Otener_area() override ;
  void Verificar() override;

};


#endif //INC_01_01_RECTANGULO_H
