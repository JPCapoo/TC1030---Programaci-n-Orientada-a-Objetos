#include<iostream>
#include<string>

using namespace std;

#include "claseLaserMan.h"

class Genius: public Personaje {
    private: //Atributos
        int numRespuestas;
        bool telepatia;
        bool congelar;
    public: //Métodos
        Genius(); //Default Constructor
        Genius(int, int, int, int, bool, bool); //Constructor
        void shoot();
        bool pwrTelepatia(bool);
        bool pwrCongelar(bool);
        void muestraDatosG();
};

//Default constructor de la clase Genius
Genius::Genius(){
    numRespuestas = 0;
    telepatia = false;
    congelar = false;
};

//Constuctor de la clase Genius (Clase Hija)
Genius::Genius(int n, int c, int s, int r, bool t, bool cong): Personaje(n, c, s){
    numRespuestas = r;
    telepatia = t;
    congelar = cong;
}

bool Genius::pwrTelepatia(bool t){
    telepatia = t;
    return telepatia;
}

bool Genius::pwrCongelar(bool c){
    congelar = c;
    return congelar;
}

void Genius::muestraDatosG(){
    muestraDatosP();
    cout << "Telepatia: " << telepatia << endl;
    cout << "Congelar: " << congelar << endl;
}

void Genius::shoot(){
    cout << "Genius Freeze: " << congelar << endl;
}