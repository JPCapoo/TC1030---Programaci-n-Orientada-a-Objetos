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

#include "A01252252_veterinaria.h"

class Dog : public Veterinaria {
private:
    bool pedigree;
    
public:
    Dog();
    Dog(bool,string, string);
    void getDatos(bool*, string*, string*);
    void Pet();
};

Dog::Dog(){
    pedigree = false;
}

Dog::Dog(bool p, string n, string t): Veterinaria(n, t){
    pedigree = p;
};

void Dog::getDatos(bool*ped, string*nom, string*tip){ //Error no se encuentra el nombre de las variables
    *ped = pedigree;
    *nom = nombre; 
    *tip = tipo;
};

void Dog::Pet(){
    cout <<"   Guau!"<<endl;
}
