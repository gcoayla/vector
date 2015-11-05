#include<iostream>
#include<math.h>
#include "punto.h"
#include "vector.h"
using namespace std;
void Vector::distancia(){
        float a;
        a=pow(start.getx()-end.getx(),2)+pow(start.gety()-end.gety(),2);
        a=sqrt(a);
        cout<<a<<endl;
}
 void punto::impr(){
    cout<<"la coordenada del punto x: "<<getx()<<endl;
    cout<<"la coordenada del punto y: "<<gety()<<endl;
}



void circulo::area(){
    float e;
    e=pow(r,2)*3.14;
    cout<<e<<endl;
    }
void circulo::circun(){
    float c;
    c=2*3.14*r;
    cout<<c<<endl;
    }


int main(){
Vector recta(3.7,4.5,6.8,1.2);



recta.distancia();


return 0;

}










