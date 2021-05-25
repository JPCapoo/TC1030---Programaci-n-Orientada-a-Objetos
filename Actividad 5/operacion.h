#include<iostream>
#include<string>

using namespace std;

class Operacion {
    protected: //Atributos
        int valor1;
        int valor2;
        int resultado;
    public: //Métodos
        Operacion(); //Default Constructor
        Operacion(int, int, int); //Constructor
        void setvalor1(int num1);
        void setvalor2(int num2);
        int mostrarresultados();
        
};

//Default constructor de la clase Persona
Operacion::Operacion(){
    valor1 = 0;
    valor2 = 0;
    resultado = 0;
};

//Constuctor de la clase Persona (Clase Padre)
Operacion::Operacion(int v1, int v2, int r){
    valor1 = v1;
    valor2 = v2;
    resultado = r;
};

void Operacion::setvalor1(int num1){
    valor1 = num1;
};

void Operacion::setvalor2(int num2){
    valor2 = num2;
};

int Operacion::mostrarresultados(){
    cout << resultado << endl;
    return resultado;
};