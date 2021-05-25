#include<iostream>
#include<string>
#include "operacion.h"

using namespace std;

class Suma: public Operacion {
    public: //Métodos
        Suma();
        Suma(int valor1, int valor2, int r);
        void operar();
};

Suma::Suma(): Operacion(){
    valor1 = 0;
    valor2 = 0;
    resultado = 0;
};

Suma::Suma(int v1, int v2, int r):Operacion (v1,v2,r){
    valor1 = v1;
    valor2 = v2;
    resultado = r;

};

void Suma::operar(){
    resultado = valor1 + valor2;
}