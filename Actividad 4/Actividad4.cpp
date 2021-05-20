#include <iostream>
#include <string>
#include <functional>
#include <ctime>

#include "ClaseMaestro.h"

using namespace std;

int main(){

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