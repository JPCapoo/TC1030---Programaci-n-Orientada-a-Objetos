#include <iostream>
#include <string>
#include <functional>
#include <ctime>


#include "resta.h"


using namespace std;

int main(){

    Suma suma1;
    suma1.setvalor1(5);
    suma1.setvalor2(5);

    suma1.operar();
    cout << "suma: " << endl;
    suma1.mostrarresultados();

    return 0;
}