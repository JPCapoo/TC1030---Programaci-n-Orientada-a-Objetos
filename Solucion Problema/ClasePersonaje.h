#include<iostream>
#include<string>

using namespace std;

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



#endif