#include<iostream>
#include<string>
#include <vector>

using namespace std;

#include "claseArrowMan.h"

int main() {
    vector<Personaje*> vecPersonaje;
    Personaje *objPersonaje;

    objPersonaje = new LaserMan("Lintera",3, 5, 10, 5, 5, true);
    vecPersonaje.push_back(objPersonaje);

    objPersonaje = new Genius("Lintera",3, 10, 3, 2, 10, true, false);
    vecPersonaje.push_back(objPersonaje);

    objPersonaje = new ArrowMan("Lintera",2, 8, 7, 10,"Arco", 10, 15, true);
    vecPersonaje.push_back(objPersonaje);

    cout << "--- show Vector DRAW ---"<<endl;
    for(int i = 0; i <vecPersonaje.size(); i++){
            vecPersonaje[i] -> shoot();
    }
    return 0;
}