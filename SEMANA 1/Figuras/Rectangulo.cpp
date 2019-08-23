//
// Created by Fabrizio Vásquez on 8/21/19.
//

#include "Rectangulo.h"

 float Rectangulo::Otener_area() {
    distanciaXR = pow((pow(c1 - a1, 2) + pow(c2 - a2, 2)), 0.5);
    distanciaYR = pow((pow(b1 - a1, 2) + pow(b2 - a2, 2)), 0.5);
    return distanciaYR * distanciaXR;
}

 void Rectangulo::Pedir_datos() {
     //Creando un objetivo del tipo Rectangulo con propiedades de Figura

    rectangulito = new Rectangulo();



    cout<<"Digite los 4 puntos de conforman un Rectangulo: \n";

    cout<<"\nPrimer punto (Primer Par): ";cin>>a1;
    rectangulito->setX(a1);
    cout<<"Segundo punto (Primer Par: ";cin>>a2;
    rectangulito->setY(a2);

    //cout<<"\n"<<rectangulito->getX(a1);
    //cout<<"\n"<<rectangulito->getY(a2);



    cout<<"\nPrimer punto (Segundo Par): ";cin>>b1;
    rectangulito->setX(b1);
    cout<<"Segundo punto (Segundo Par): ";cin>>b2;
    rectangulito->setY(b2);

    //cout<<"\n"<<rectangulito->getX(b1);
    //cout<<"\n"<<rectangulito->getY(b2);


    cout<<"\nPrimer punto (Tercer Par): ";cin>>c1;
    rectangulito->setX(c1);
    cout<<"Segundo punto (Tercer Par): " ;cin>>c2;
    rectangulito->setY(c2);

    //cout<<"\n"<<rectangulito->getX(c1);
    //cout<<"\n"<<rectangulito->getY(c2);


    cout<<"\nPrimer punto (Cuarto Par): ";cin>>d1;
    rectangulito->setX(d1);
    cout<<"Segundo punto (Cuarto Par): ";cin>>d2;
    rectangulito->setY(d2);



    //cout<<"\n"<<rectangulito->getX(d1);
    //cout<<"\n"<<rectangulito->getY(d2);

}





 void Rectangulo::Verificar() {
    if(rectangulito->getX(a1) == rectangulito->getX(b1)){
        if(rectangulito->getY(a2) != rectangulito->getY(b2)){
            if (rectangulito->getX(c1) == rectangulito->getX(d1)){
                if(rectangulito->getY(c2) != rectangulito->getY(d2)){
                    if(rectangulito->getY(a2) == rectangulito->getY(c2)){
                        cout<<"\nEsto es un rectangulo";

                    }
                }
            }
        }
    }
    if (rectangulito->getX(c1) == rectangulito->getX(d1)){
        if(rectangulito->getY(c2) != rectangulito->getY(d2)){
            if(rectangulito->getX(a1) == rectangulito->getX(b1)){
                if(rectangulito->getY(a2) != rectangulito->getY(b2)){
                    if(rectangulito->getY(b2) == rectangulito->getY(d2)){
                        cout<<"\nEsto es un rectangulo";
                    }
                }

            }
        }
    }


}