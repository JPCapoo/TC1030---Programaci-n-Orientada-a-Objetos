#include<iostream>
#include "claseCirculo.h"

using namespace std;

int main() {

    Circle circulo(3,3,2);
    circulo.getValueX();
    circulo.draw();

    Rectangle rectangulin(1,2,4,4);
    rectangulin.draw();

    Shape figura(3,3);
    figura.draw();

    return 0;
}