//
// Created by Fabrizio Vásquez on 8/22/19.
//

#include "FiguraCompuesta.h"

 void FiguraCompuesta::Obtener_centroide() {
    float x;
    float y;

    /*Obtener_data();*/

    x = (A1*X1+A2*X2+A3*X3) / (A1+A2+A3);
    y = (A1+Y1+A2+Y2+A3+Y3) / (A1+A2+A3);
    cout<<"La componente X de la figura es : "<<x;
    cout<<"La componente Y de la figura es : "<<y;


}
/*
 void FiguraCompuesta::Obtener_data() {

    Figura *rectangulo = new Rectangulo();
    Figura *triangulo = new Triangulo();
    Figura *circulo = new Circulo();



    rectangulo->Pedir_datos();  //1
    circulo->Pedir_datos();     //2
    triangulo->Pedir_datos();   //3

    X1 = distanciaXT + distanciaXR/2;
    X2 = distanciaXT + distanciaXR/2;
    X3 = 2*distanciaXT/3;

    Y1 = distanciaYR/2;
    Y2 = distanciaYR/2;
    Y3 = 1*distanciaYT/3;

    A1 = rectangulo->Otener_area();
    A2 = circulo->Otener_area();
    A3 = triangulo->Otener_area();

}


*/


