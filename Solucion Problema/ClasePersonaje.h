#include<iostream>
#include<string>

using namespace std;

#include "ClaseItem.h"
#ifndef ClasePersonaje_h
#define ClasePersonaje_h

class Personaje {
    private: //Atributos
        string nombre;
        int nivel;
    public: //Métodos
        Personaje(); //Default Constructor
        Personaje(string, int); //Constructor
        int setNivel(int);
        int getNivel();
        
};

Personaje::Personaje(){
    nombre = "n/a";
    nivel = 0;
}

Personaje::Personaje(string n, int niv){
    nombre = n;
    nivel = niv;
}

int Personaje::setNivel(int niv){
    nivel = niv;

    return nivel;
}

int Personaje::getNivel(){
    return nivel;
}

// Clase Smith

class Principal: public Personaje, public Equipo {
    public:
        Principal();
        Principal(string, int, string, int, bool);
};

Principal::Principal(){}

Principal::Principal(string n, int niv, string nombreItem, int nivItem, bool e): Personaje(n, niv), Equipo(nombreItem, nivItem ,e){}




#endif