#include<iostream>
#include<string>

using namespace std;

class Persona {
    private: //Atributos
        string nombre;
        int edad;
    public: //Métodos
        Persona(); //Default Constructor
        Persona(string, int); //Constructor
        string getNombre();
        string setNombre(string);
        int getEdad();
        int setEdad(int);
        void muestraDatosP();
        
};

//Default constructor de la clase Persona
Persona::Persona(){
    nombre = "Nadie";
    edad = 0;
};

//Constuctor de la clase Persona (Clase Padre)
Persona::Persona(string n, int e){
    nombre = n;
    edad = e;
};

string Persona::getNombre(){ // Definir función por fuera de clase.
    return nombre;
};

string Persona::setNombre(string n){
    nombre = n;
    return nombre;
};

int Persona::getEdad(){
    return edad;
};

int Persona::setEdad(int e){
    edad = e;
    return edad;
};

void Persona::muestraDatosP(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}