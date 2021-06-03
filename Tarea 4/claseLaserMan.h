#include<iostream>
#include<string>

using namespace std;

#include "clasePersonaje.h"

class LaserMan: public Personaje{
    private: //Atributos
        int numCargas;
        bool laser;
    public: //Métodos
        LaserMan(); //Default Constructor
        LaserMan(string, int, int, int, int, int, bool); //Constructor
        void shoot();
        bool pwrLaser(bool);
        void muestraDatosL();
        
};

//Default constructor de la clase LaserMan
LaserMan::LaserMan(){
    numCargas = 0;
    laser = false;
};

//Constuctor de la clase LaserMan (Clase Hija)
LaserMan::LaserMan(string nI, int nL,int n, int c, int s, int numC, bool l): Personaje(nI, nL, n, c, s){
    numCargas = numC;
    laser = l;
};

bool LaserMan::pwrLaser(bool l){
    laser = l;
    return laser;
};

void LaserMan::muestraDatosL(){
    muestraDatosP();
    cout << "Laser: " << laser << endl;
    
}

void LaserMan::shoot(){
    cout << "LaserMan shootLaser: " << laser << endl;
}