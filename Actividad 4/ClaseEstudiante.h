#include<iostream>
#include<string>
#include "ClasePersona.h"

using namespace std;

class Estudiante: public Persona {
    private: //Atributos
        string carrera;
    public: //Métodos
        Estudiante(); //Default Constructor
        Estudiante(string, int, string); //Constructor
        string getCarrera();
        string setCarrera(string);
        void muestraDatosE();
};

//Default constructor de la clase Estudiante
Estudiante::Estudiante(){
    carrera = "N/A";
};

//Constuctor de la clase Estudiante (Clase Hija)
Estudiante::Estudiante(string n, int e, string c): Persona(n, e){
    carrera = c;
};

string Estudiante::setCarrera(string c){
    carrera = c;
    return carrera;
};

void Estudiante::muestraDatosE(){
    muestraDatosP();
    cout << "Carrera: " << carrera << endl;
};