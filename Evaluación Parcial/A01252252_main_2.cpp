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

#include "A01252252_dog.h"
#include "A01252252_cat.h"
#include "A01252252_chicken.h"


int main() {

    // instancias de las clases derivadas

    Dog dog(true, "cachorrino fino", "Bulldog");
    Cat cat(true, "misifu", "Angora");
    Chicken chicken(false, "Chiken little", "Dancer");

    // obtiene los atributos de una clase derivada y base al mismo tiempo
    bool pedigree =false;
    string name = "";
    string type = "";

    dog.getDatos(&pedigree, &name, &type);
    dog.Pet();
    cout<<"Pedigree :"<<pedigree<<" Nombre : "<<name<<" Tipo :"<<type<<endl;

    return 0;

}

