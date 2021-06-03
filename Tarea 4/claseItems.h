#include<iostream>
#include<string>

using namespace std;

class Items{ //Clase Items
    private: //Atributos
        string nombre;
    public: //Metodos
        Items(); //Default Constructor
        Items(string); //Constructor
        void setNombre(string);
        string getNombre();
        void muestraDatosItems();
};

Items::Items(){ //Default Constructor
    nombre = "no asignado";
}

Items::Items(string _nombre){ //Constructor de la clase Items (Clase Padre de Items)
    nombre = _nombre;
}

void Items::setNombre(string _nombre){
    nombre = _nombre;
}

string Items::getNombre(){
    return nombre;
}

void Items::muestraDatosItems(){
    cout << "El nombre del Item es: "<< nombre << endl;
}

/*
int main(){
    Espada item1("Espada",4);
    item1.muestraDatos();

    return 0;
}
*/
