#include<iostream>
#include<string>

using namespace std;

class Personaje {
    private: //Atributos
        int nivel;
        int correr;
        int saltar;
    public: //Métodos
        Personaje(); //Default Constructor
        Personaje(int, int, int); //Constructor
        virtual void shoot();
        int setCorrer(int);
        int setSaltar(int);
        void muestraDatosP();
        
};

//Default constructor de la clase Personaje
Personaje::Personaje(){
    nivel = 1;
    correr = 1;
    saltar = 1;
};

//Constuctor de la clase Persona (Clase Padre)
Personaje::Personaje(int n, int c, int s){
    nivel = n;
    correr = c;
    saltar = s;
};

int Personaje::setCorrer(int c){
    correr = c;
    return correr;

};

int Personaje::setSaltar(int s){
    saltar = s;
    return saltar;
};

void Personaje::muestraDatosP(){
    cout << "Nivel: " << nivel << endl;
    cout << "Correr: " << correr << endl;
    cout << "Saltar: " << saltar << endl;
}

void Personaje::shoot(){
    cout << "Soy la función Shoot de un Personaje" << endl;
}