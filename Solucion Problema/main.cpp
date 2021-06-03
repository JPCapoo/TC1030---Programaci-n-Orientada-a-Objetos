#include<iostream>
#include<string>

using namespace std;

/****************** CLASES ******************/

class Personaje {
    private: //Atributos
        string nombre;
        int nivel;
    public: //Métodos
        Personaje(); //Default Constructor
        Personaje(string, int); //Constructor
        int setNivel(int);
};

class Habitacion {
    private: //Atributos
        string nombre; 
        int tamaño;
        string estilo;
    public: //Métodos
        Habitacion(); //Default Constructor
        Habitacion(int, string); //Constructor
        int setEstilo(string);
};

class Items {
    private: //Atributos
        string nombre;
    public: //Métodos
        Items(); //Default Constructor
        Items(string); //Constructor
        int setNombre(string);
};