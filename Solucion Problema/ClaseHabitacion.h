#include<iostream>
#include<string>

using namespace std;

#ifndef ClaseHabitacion_h
#define ClaseHabitacion_h

class Habitacion {
    private: //Atributos
        string nombre; 
        int tamano;
        string estilo;
        int numHabitacion;
    public: //Métodos
        Habitacion(); //Default Constructor
        Habitacion(string, int, string, int); //Constructor
        string setEstilo(string);
        int setNumHabitacion(int);
};

Habitacion::Habitacion(){
    nombre = "N/A";
    tamano = 1;
    estilo = "Sin estilo";
    numHabitacion = 1;
}

Habitacion::Habitacion(string n, int t, string e, int numH){
    nombre = n;
    tamano = t;
    estilo = e;
    numHabitacion = numH;

}

string Habitacion::setEstilo(string e){
    estilo = e;

    return estilo;
}

int Habitacion::setNumHabitacion(int n){
    numHabitacion = n;

    return numHabitacion;
}

#endif