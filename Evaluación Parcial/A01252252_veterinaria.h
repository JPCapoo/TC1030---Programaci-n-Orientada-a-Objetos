//
// Nombre    : Juan Pablo Capobianco Ramos
// Matricula : A01252252
//
// TC1030 Programacion Orientada a Objetos
// Fecha 3 de Junio del 2021
//
// Completa el siguiente codigo de C++ para que compile y ejecute correctamente
//

#include <iostream>
#include <string>

using namespace std;

#ifndef A01252252_veterinaria_h
#define A01252252_veterinaria_h

class Veterinaria {
protected:
    string nombre;
    string tipo;
public:
    Veterinaria();
    Veterinaria(string, string);
    void setDatos(string, string);
    void getDatos(string*, string*);
    virtual void Pet();
};

Veterinaria::Veterinaria(){
    nombre = "n/a";
    tipo = "n/a";
}

Veterinaria::Veterinaria(string n, string t){
    nombre = n;
    tipo = t;
}

void Veterinaria::setDatos(string nom, string tip){
    nombre = nom;
    tipo = tip;
}

void Veterinaria::getDatos(string *nom, string *tip){
    *nom = nombre; 
    *tip = tipo;
}

void Veterinaria::Pet(){
    cout <<"Yo no soy ninguno animalito"<<endl;
}

#endif


