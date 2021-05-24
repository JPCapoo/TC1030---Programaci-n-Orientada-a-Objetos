/* Juan Pablo Capobianco A01252252
Oscar Jesús Soto A01251915
Programación Orientada a Objetos
Tarea 1 - Herencia Character
*/

#include<iostream>
#include<string>

using namespace std;

/****************** CLASES ******************/

class Personaje {
    private: //Atributos
        int nivel;
        int correr;
        int saltar;
    public: //Métodos
        Personaje(); //Default Constructor
        Personaje(int, int, int); //Constructor
        int setCorrer(int);
        int setSaltar(int);
        void muestraDatosP();
        
};

class LaserMan: public Personaje {
    private: //Atributos
        int numCargas;
        bool laser;
    public: //Métodos
        LaserMan(); //Default Constructor
        LaserMan(int, int, int, int, bool); //Constructor
        bool pwrLaser(bool);
        void muestraDatosL();
        
};
        
class Genius: public Personaje {
    private: //Atributos
        int numRespuestas;
        bool telepatia;
        bool congelar;
    public: //Métodos
        Genius(); //Default Constructor
        Genius(int, int, int, int, bool, bool); //Constructor
        bool pwrTelepatia(bool);
        bool pwrCongelar(bool);
        void muestraDatosG();
};

class ArrowMan: public Personaje {
    private: //Atributos
        int numflechas;
        bool dispararflechas;
    public: //Métodos
        ArrowMan(); //Default Constructor
        ArrowMan(int, int, int, int, bool); //Constructor
        bool pwrFlechas(bool);   
        void muestraDatosA();
};
/****************** CONSTRUCTORES ******************/

//Default constructor de la clase Personaje
Personaje::Personaje(){
    nivel = 1;
    correr = 1;
    saltar = 1;
};

//Constuctor de la clase Persona (Clase Padre)
Personaje::Personaje(int n, int c, int s){
    nivel = n;
    correr = c;
    saltar = s;
};

//Default constructor de la clase LaserMan
LaserMan::LaserMan(){
    numCargas = 0;
    laser = false;
};

//Constuctor de la clase LaserMan (Clase Hija)
LaserMan::LaserMan(int n, int c, int s, int numC, bool l): Personaje(n, c, s){
    numCargas = numC;
    laser = l;
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

//Default constructor de la clase ArrowMan
ArrowMan::ArrowMan(){
    numflechas = 0;
    dispararflechas = false;
}

//Constuctor de la clase ArrowMan (Clase Hija)
ArrowMan::ArrowMan(int n, int c, int s, int nf, bool df): Personaje(n, c, s){
    numflechas = nf;
    dispararflechas = df;
}

/****************** METODOS ******************/

int Personaje::setCorrer(int c){
    correr = c;
    return correr;

};

int Personaje::setSaltar(int s){
    saltar = s;
    return saltar;
};

void Personaje::muestraDatosP(){
    cout << "Nivel: " << nivel << endl;
    cout << "Correr: " << correr << endl;
    cout << "Saltar: " << saltar << endl;
}

bool LaserMan::pwrLaser(bool l){
    laser = l;
    return laser;
};

void LaserMan::muestraDatosL(){
    muestraDatosP();
    cout << "Laser: " << laser << endl;
    
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

bool ArrowMan::pwrFlechas(bool df){
    dispararflechas = df;
    return dispararflechas;
}

void ArrowMan::muestraDatosA(){
    muestraDatosP();
    cout << "Disparar Flechas: " << dispararflechas << endl;
}

int main () {

    LaserMan ciclope(5, 4, 10, 10, true);
    ciclope.muestraDatosL();
    cout << endl;

    Genius akinator(3, 5, 4, 2, true, true);
    akinator.muestraDatosG();
    cout << endl;

    ArrowMan hawkeye(4, 3, 6, 20, true);
    hawkeye.muestraDatosA();
    cout << endl;

    return 0;
}

