/* Juan Pablo Capobianco A01252252
Oscar Jesús Soto A01251915
Programación Orientada a Objetos
Actividad Herencia
*/

#include<iostream>
#include<string>

using namespace std;

/****************** CLASES ******************/

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

/****************** CONSTRUCTORES ******************/

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

//Default constructor de la clase Estudiante
Estudiante::Estudiante(){
    carrera = "N/A";
};

//Constuctor de la clase Estudiante (Clase Hija)
Estudiante::Estudiante(string n, int e, string c): Persona(n, e){
    carrera = c;
};

//Default constructor de la clase Maestro
Maestro::Maestro(){
    depto = "N/A";
}

//Constuctor de la clase Maestro (Clase Hija)
Maestro::Maestro(string n, int e, string d): Persona(n, e){
    depto = d;
}

/****************** METODOS ******************/

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

string Estudiante::setCarrera(string c){
    carrera = c;
    return carrera;
};

void Estudiante::muestraDatosE(){
    muestraDatosP();
    cout << "Carrera: " << carrera << endl;
};

string Maestro::setDepto(string d){
    depto = d;
    return depto;
};

void Maestro::muestraDatosM(){
    muestraDatosP();
    cout << "Departamento: " << depto << endl;
};

int main () {

    Persona persona1("Oscar", 24);
    persona1.muestraDatosP();
    cout << endl;

    Estudiante estudiante1("Juan",18,"ITC");
    estudiante1.muestraDatosE();
    cout << endl;

    Maestro maestro1("Paco",38,"ciencias");
    maestro1.muestraDatosM();

    return 0;
}

