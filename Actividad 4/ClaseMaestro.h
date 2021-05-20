#include<iostream>
#include<string>
#include "ClaseEstudiante.h"

using namespace std;

class Maestro: public Persona {
    private: //Atributos
        string depto;
    public: //Métodos
        Maestro(); //Default Constructor
        Maestro(string, int, string); //Constructor
        string getDepto();
        string setDepto(string);
        void muestraDatosM();
};

//Default constructor de la clase Maestro
Maestro::Maestro(){
    depto = "N/A";
}

//Constuctor de la clase Maestro (Clase Hija)
Maestro::Maestro(string n, int e, string d): Persona(n, e){
    depto = d;
}

string Maestro::setDepto(string d){
    depto = d;
    return depto;
};

void Maestro::muestraDatosM(){
    muestraDatosP();
    cout << "Departamento: " << depto << endl;
};