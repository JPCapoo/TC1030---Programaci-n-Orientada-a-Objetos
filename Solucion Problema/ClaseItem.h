#include<iostream>
#include<string>

using namespace std;

#ifndef ClaseItem_h
#define ClaseItem_h

class Items {
    private: //Atributos
        string nombre;
        int valor;
    public: //Métodos
        Items(); //Default Constructor
        Items(string, int); //Constructor
        string setNombre(string);
};

Items::Items(){
    nombre = "N/A";
    valor = 0;
}

Items::Items(string n, int v){
    nombre = n;
    valor = v;
}

string Items::setNombre(string n){
    nombre = n;

    return nombre;
}


#endif