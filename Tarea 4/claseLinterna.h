#include<iostream>
#include<string>

using namespace std;

#include "claseItems.h"

class Linterna : public Items{ //Clase linterna
    private:
        int nivelLuz;
    public:
        Linterna();
        Linterna(string, int);
        void setNivel(int);
        int getNivel();
        void muestraDatosItemLinterna();
};

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

// Linterna 
Linterna::Linterna(){//Default Constructor
    nivelLuz = 0;
}

Linterna::Linterna(string _nombreLinterna, int _nivelLuz) :Items(_nombreLinterna){//Constructor de la clase Linterna
    nivelLuz = _nivelLuz;
}

void Linterna::setNivel(int _nivelLuz){
    nivelLuz = _nivelLuz;
}

int Linterna::getNivel(){
    return nivelLuz;
}

void Linterna::muestraDatosItemLinterna(){
    muestraDatosItems();
    cout << "El nivel de luz del item es: " << nivelLuz << endl;
}



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