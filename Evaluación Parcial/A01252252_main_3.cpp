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
#include <vector>

using namespace std;

#include "A01252252_dog.h"
#include "A01252252_cat.h"
#include "A01252252_chicken.h"


int main() {

    // 1.- Declara un arreglo de punteros de tamaño 3 de tipo base
    vector<Veterinaria*> vet;
    Veterinaria *animal;


    // 2.- Haz una instancia de cada clase derivada Dog, Cat, Chicken y metelas al arreglo
    animal = new Cat(true, "Garfield", "Persa");
    vet.push_back(animal);

    animal = new Chicken(false, "Claudio", "Gallina");
    vet.push_back(animal);

    animal = new Dog(true, "Clifford", "Beagle");
    vet.push_back(animal);



    // 3.- Ejecuta un for para mostrar el contenido del arreglo, funcion Pet trabajando en polimorfismo

    for (int i = 0; i < sizeof(vet)/sizeof(vet[0]); i++) {
        vet[i] -> Pet();
    };


    return 0;
}

