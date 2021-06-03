#include<iostream>
#include<string>

using namespace std;

#include "claseItems.h"

class Arco : public Items{ //Clase Arco
    private:
        int nivelArco;
    public:
        Arco();
        Arco(string, int);
        void setNivel(int);
        int getNivel();
        void muestraDatosItemArco();
};

// Arco 
Arco::Arco(){//Default Constructor
    nivelArco = 0;
}

Arco::Arco(string _nombreArco, int _nivelArco) :Items(_nombreArco){//Constructor de la clase Arco
    nivelArco = _nivelArco;
}

void Arco::setNivel(int _nivelArco){
    nivelArco = _nivelArco;
}

int Arco::getNivel(){
    return nivelArco;
}

void Arco::muestraDatosItemArco(){
    muestraDatosItems();
    cout << "El nivel del Arco es: " << nivelArco << endl;
}