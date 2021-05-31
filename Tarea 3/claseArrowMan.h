#include<iostream>
#include<string>

using namespace std;

#include "claseGenius.h"

class ArrowMan: public Personaje {
    private: //Atributos
        int numflechas;
        bool dispararflechas;
    public: //Métodos
        ArrowMan(); //Default Constructor
        ArrowMan(int, int, int, int, bool); //Constructor
        void shoot();
        bool pwrFlechas(bool);   
        void muestraDatosA();
};

//Default constructor de la clase ArrowMan
ArrowMan::ArrowMan(){
    numflechas = 0;
    dispararflechas = false;
};

//Constuctor de la clase ArrowMan (Clase Hija)
ArrowMan::ArrowMan(int n, int c, int s, int nf, bool df): Personaje(n, c, s){
    numflechas = nf;
    dispararflechas = df;
};

bool ArrowMan::pwrFlechas(bool df){
    dispararflechas = df;
    return dispararflechas;
};

void ArrowMan::muestraDatosA(){
    muestraDatosP();
    cout << "Disparar Flechas: " << dispararflechas << endl;
};

void ArrowMan::shoot(){
    cout << "ArrowMan shootArrow: " << dispararflechas << endl;
}