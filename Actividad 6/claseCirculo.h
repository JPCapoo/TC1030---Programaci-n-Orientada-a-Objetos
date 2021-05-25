#include <iostream>

using namespace std;

#include "claseRectangulo.h"

class Circle:public Shape {
private:
    int r;
public:
    Circle();
    Circle(int,int,int);
    void draw();
};

Circle::Circle(){
    r = 0;
}

Circle::Circle(int valX, int valY, int valR):Shape(valX, valY){
    r = valR;
}

void Circle::draw(){
    cout << "Soy un Circulo" << endl;
}
