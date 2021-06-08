#include<iostream>
#include<string>

using namespace std;

#include "clasePersonaje.h"
#include "claseHabitacion.h"
#include "claseItem.h"

//Nombre de Clases, Personajes, Habitaciónes e Item
    
Personaje Smith("Smith", 0);
Personaje Millonario("Millonario Mr.Musk", 5);
Habitacion laCassino("LA Casino", 3, "Casino", 1);
Habitacion belAirHotel("Bel-Air Hotel", 4, "Hotel", 2);
Habitacion Republique("Republique", 2, "Restaurante", 3 );
Habitacion StaplesCenter("Staples Center", 5, "Estadio", 4);

Items Lupa("Lupa", 3);

// Variables

string respuestainicio="";
string respuestaTelefono="";
string respuestaLlamadaMillonario="";

int cuartoActual = 0;

// Funciones

string Inicio() {
        cout << "" << endl;
        cout<< "Narrador: Tu eres Smith Clues, el mejor detective de Los Angeles, conocido por tu impecable trabajo y efectividad."<< endl;
        cout<< "Ringgg Ringggg *sonido de telefono*" << endl;
        cout<< "Quieres contestar el telefono?: s/n " <<endl;
        cin >> respuestaTelefono;

        return respuestaTelefono;
};

string LlamadaMillonario() {
    cout << "" << endl;
    cout << "Millonario: Buenas Noches Smith, muchos amigos me hablaron bien de ti y de lo impecable que es tu trabajo, te tengo un trabajo. El dia de ayer sali de fiesta por las calles de Los Angeles y perdi un maletin con un contenido muy valioso, es realmente imporante para mi. Necesito que lo enceuntres. Por el dinero no te preocupes, eso lo vemos despues... Que dices Smith, aceptas: ? s/n" <<endl;
    cin >> respuestaLlamadaMillonario;

    return respuestaLlamadaMillonario;
}

void Indicaciones(){
    cout << "" << endl;
    cout << "Millonario: Excelente Smith, yo sabia que podia contar contigo..." << endl;
    cout << "Millonario: Te mandare una lista de los lugares que visite el dia que perdi mi maletin..." << endl;
    cout << "" << endl;
    cout << "--------Lista--------" << endl;
    cout << "1.- LACassino" << endl;
    cout << "2.- Bel-Air Hotel" << endl;
    cout << "3.- Republique Restaurant" << endl;
    cout << "4.- Staples Center Stadium" << endl;
    cout << "---------------------" << endl;
    cout << "" << endl;
    cout << "Millonario: Se cuidadoso al visitar estos lugares, te encontraras con algunas pruebas y es posible que para acceder a algunos de ellos necesites alguna clave..." << endl;
    cout << "Millonario: Smith no me defraudes..." << endl;
    cout << "Millonario: Llamame cuando tengas mi maletin." << endl;
    cout << "*Millonario cuelga..*" << endl;
    cout << "" << endl;
}

void problemaSuma(int niv){
    if (niv == 1){

    }
    else if (niv == 2){

    }
    else if (niv == 3){

    }
    else if (niv == 4){

    }
    else if (niv == 5){

    }
}

void problemaResta(int niv){
    if (niv == 1){

    }
    else if (niv == 2){

    }
    else if (niv == 3){

    }
    else if (niv == 4){

    }
    else if (niv == 5){

    }
}

void problemaMultiplicacion(int niv){
    if (niv == 1){

    }
    else if (niv == 2){

    }
    else if (niv == 3){

    }
    else if (niv == 4){

    }
    else if (niv == 5){

    }
}

void problemaDivision(int niv){
    if (niv == 1){

    }
    else if (niv == 2){

    }
    else if (niv == 3){

    }
    else if (niv == 4){

    }
    else if (niv == 5){

    }
}

bool getLupa(){
    
}

string getCodigo(){

}

bool entrarPuerta(int c){
    bool entrar = false;
    string codigo;

    while (entrar == false){
        if (c == 1) {
            entrar = true;
        } 
        else if (c == 2) {
            if (){
                entrar = true;
            }
            
        } 
        else if (c == 3) {
            cout << "Introduzca el codigo secreto" << endl;
            cin >> codigo;
            if (codigo == "magia"){
                entrar = true;
            }
        } 
        else if (c == 4) {
            cout << "Cuentas con la llave de acceso? s/n:" << endl;
            if (){
                entrar = true;
            }
        }
    }

    return entrar;
}

int elegirCuarto(int c){
    int cuartoProximo;
    bool entrar = false;

    while (entrar == false){
        cout << "Te encuentras en el cuarto " << c << endl;
        cout << "Hacia que cuarto quieres dirigirte? : "<< endl;
        cout << endl;
        cout << "--------Lista--------" << endl;
        cout << "1.- LACassino" << endl;
        cout << "2.- Bel-Air Hotel" << endl;
        cout << "3.- Republique Restaurant" << endl;
        cout << "4.- Staples Center Stadium" << endl;
        cout << "---------------------" << endl;
        cout << endl;
        cin >> cuartoProximo;

        entrarPuerta(cuartoProximo);

        if (entrar == true){
            cuartoActual = cuartoProximo;
        }
    }
    
    return cuartoActual;
}


// Main

int main(){
    //---------------------------- Empieza Juego ------------------------------------------------
    
    cout << "Bienvenido a Simth Clues"<< endl;
    cout << "Iniciamos? s/n: " ;
    cin >> respuestainicio;

    //---------------------------- Inicio e Indicaciones ----------------------------------------

    if (respuestainicio == "s"){
        Inicio();
        if (respuestaTelefono == "s"){
            LlamadaMillonario();
            if (respuestaLlamadaMillonario == "s"){
                Indicaciones();

                // El usuario empieza a jugar
                elegirCuarto(cuartoActual); // Funcion para elegir Cuarto.
            }
            else{
                cout << "Smith: Este trabajo no es para mi..." << endl;
                cout << "*Smith cuelga...*" << endl;
                cout << "Fin." << endl;
            }
        }
        else{
            cout<< "No esta vez, es hora de descansar." <<endl;
            cout<< "Fin." <<endl;
        }
    }
    else{
        cout << "Fin." << endl;
    };

    
}