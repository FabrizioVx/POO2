//
// Created by Fabrizio Vásquez on 8/21/19.
//

#include "Circulo.h"

void Circulo::Pedir_datos() {
    circulito = new Circulo();
    cout<<"\nDigite el centro de coordenadas del circulo (x,y) del";

    cout<<"\nDigite la componente X: ";cin>>h1;
    circulito->setX(h1);


    cout<<"\nDigite la componente Y: ";cin>>h2;
    circulito->setY(h2);

    cout<<"Digite el radio (entero por favor): ";cin>>r1;
}

float Circulo::Otener_area() {
    areaC = PI * pow(r1,2);
    return areaC;
}

void Circulo::Verificar() {

}
