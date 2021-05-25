#include<iostream>
#include<string>
#include "suma.h"

using namespace std;

class Resta: public Operacion {
    public: //Métodos
        Resta();
        Resta(int valor1, int valor2, int r);
        void operar();
};

Resta::Resta(): Operacion(){
    valor1 = 0;
    valor2 = 0;
    resultado = 0;
};

Resta::Resta(int v1, int v2, int r):Operacion (v1,v2,r){
    valor1 = v1;
    valor2 = v2;
    resultado = r;

};

void Resta::operar(){
    resultado = valor1 + valor2;
}