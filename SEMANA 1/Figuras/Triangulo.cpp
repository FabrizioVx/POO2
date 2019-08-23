//
// Created by Fabrizio Vásquez on 8/21/19.
//

#include "Triangulo.h"

float Triangulo::Otener_area() {
    distanciaXT = pow((pow((g1-e1),2)+ pow((g2-e2),2)),0.5);
    distanciaYT = pow((pow((f1-g1),2)+pow((f2-g2),2)),0.5);
    areaT = (distanciaXT*distanciaYT)/2;
    return areaT ;
}

void Triangulo::Pedir_datos() {
    triguanlito = new Triangulo();

    cout<<"\nDigite los 3 puntos que conforman su triangulo: ";

    cout<<"\nPrimer punto (Primer Par): ";cin>>e1;
    triguanlito->setX(e1);  
    cout<<"Segundo punto (Primer Par: ";cin>>e2;
    triguanlito->setY(e2);


    cout<<"\nPrimer punto (Primer Par): ";cin>>f1;
    triguanlito->setX(f1);
    cout<<"Segundo punto (Primer Par: ";cin>>f2;
    triguanlito->setY(f2);


    cout<<"\nPrimer punto (Primer Par): ";cin>>g1;
    triguanlito->setX(g1);
    cout<<"Segundo punto (Primer Par: ";cin>>g2;
    triguanlito->setY(g2);

}


void Triangulo::Verificar() {
    if(triguanlito->getY(e2) == triguanlito->getY(g2)) {
        if(triguanlito->getX(f1) == triguanlito->getX(g1)){
            if (triguanlito->getX(e1) != triguanlito->getX(g1)) {
                if ((triguanlito->getX(f1) && triguanlito->getY(f2)) != (triguanlito->getX(e1) && triguanlito->getY(e2))){
                    cout<<"Es un triangulito";
                }
            }
        }
    }
}
