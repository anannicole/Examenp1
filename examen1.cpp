#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Circulo{
float radio;

public:
    int x;
    int y;
    Circulo();
    Circulo(int x2, int y2);
    Circulo (int x2, int y2, float r);
    float getRadio();
    void setRadio(float r);
    float getArea();
    void interesects(Circulo circulo);
};

int main(){

Circulo c1;
c1.setRadio(6.0);
c1.x = 2;
c1.y = 4;
cout<<"el area de tu circulo 1 es "<<c1.getArea()<<endl;

Circulo c2(5, 10.0);
c2.setRadio(4);
cout<<"el area de tu circulo 2 es "<<c2.getArea()<<endl;


Circulo c3(8, 4, 6.0);
cout<<"el area de tu circulo 3 es "<<c3.getArea()<<endl;


c1.interesects(c2);
c1.interesects(c3);
c2.interesects(c3);





    return 0;
}

Circulo::Circulo(){
radio = 0.0;
x =0;
y =0;

}
Circulo::Circulo(int x2, int y2){
    radio  = 0.0;
    x = x2;
    y = y2;

}


Circulo::Circulo (int x2, int y2, float r){
radio = r;
x= x2;
y= y2;

}
float Circulo::getRadio(){
    return radio;

}

void Circulo::setRadio(float r){
    radio = r;
    if (r<0){
        radio=0;
    }


}

float Circulo::getArea(){
    float area;
    area=3.14*(radio*radio);
return area;

}

void Circulo::interesects(Circulo circulo){
    float dist;
    dist=sqrt((circulo.x-x)*(circulo.x*x)+(circulo.y-y)*(circulo.y-y));
    if (dist<(radio+circulo.getRadio())){
        cout<<"los circulos intersectan"<<endl;
    }
else {
    cout<<"los circulos no se intersectan"<<endl;
}


}













