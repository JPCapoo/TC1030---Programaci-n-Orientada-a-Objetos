#include<iostream>
#include<string>
#include <Windows.h> //Librería para usar Sleep()

using namespace std;

#include "clasePersonaje.h"
#include "claseHabitacion.h"
#include "claseItem.h"

//Nombre de Clases, Personajes, Habitaciónes e Item
    
Principal Smith("Smith", 2, "Mochila", 5, false);

Personaje Millonario("Millonario Mr.Musk", 5);

Habitacion Calle("Calle de LA", 3, "Calle Larga", 0);
Habitacion laCassino("LA Casino", 3, "Casino", 1);
Habitacion belAirHotel("Bel-Air Hotel", 4, "Hotel", 2);
Habitacion Republique("Republique", 2, "Restaurante", 3 );
Habitacion StaplesCenter("Staples Center", 5, "Estadio", 4);

Equipo Lupa("Lupa", 3, false);
Equipo Llave("Llave", 2, false);

// Variables

string respuestainicio="";
string respuestaTelefono="";
string respuestaLlamadaMillonario="";

int cuartoActual = 0;
int contCuartos = 0;

Habitacion arregloHabitacion[5] = {Calle, laCassino, belAirHotel, Republique, StaplesCenter};
Items arregloItems[3];

// Funciones

Personaje Configuracion(){
    // Función que establece el nivel del Personaje
    int n;
    while (true){
        cout << "Ingrese el nivel de dificultad del 1-5" << endl;
        cin >> n;
        if (n >= 1 && n <= 5) {
            Smith.setNivel(n);
            break;
        } 
        else {
            cout << "Nivel de dificultad no valida." << endl;
        }
    }
    return Smith;
}

// Funciones de Dialogos
string Inicio() {
        cout << endl;
        cout<< "Narrador: Tu eres Smith Clues, el mejor detective de Los Angeles, conocido por tu impecable trabajo y efectividad."<< endl;
        Sleep(3000);
        cout<< "Ringgg Ringggg *sonido de telefono*" << endl;
        Sleep(1000);
        cout<< "Quieres contestar el telefono?: s/n " <<endl;
        cin >> respuestaTelefono;

        return respuestaTelefono;
};

string LlamadaMillonario() {
    Smith.setExiste(true);
    cout << "Excelente, has obtenido la Mochila." << endl;
    Sleep(1000);
    cout << endl;
    cout << "NUEVO ITEM: MOCHILA" << endl;
    Sleep(1000);
    cout << endl;
    cout << "LLAVE: Este item te servira para almacenar todos tus items en un lugar seguro" << endl;
    Sleep(1000);
    cout << endl;

    cout << endl;
    cout << "Millonario: Buenas Noches Smith, muchos amigos me hablaron bien de ti y de lo impecable que es tu trabajo, te tengo un trabajo. ";
    Sleep(3000);
    cout << "El dia de ayer sali de fiesta por las calles de Los Angeles y perdi un maletin con un contenido muy valioso, es realmente imporante para mi. ";
    Sleep(3000);
    cout <<"Necesito que lo enceuntres. Por el dinero no te preocupes, eso lo vemos despues... Que dices Smith, aceptas: ? s/n" <<endl;
    cin >> respuestaLlamadaMillonario;

    return respuestaLlamadaMillonario;
}

void Indicaciones(){
    cout << endl;
    cout << "Millonario: Excelente Smith, yo sabia que podia contar contigo..." << endl;
    Sleep(3000);
    cout << "Millonario: Te mandare una lista de los lugares que visite el dia que perdi mi maletin..." << endl;
    Sleep(3000);
    cout << endl;
    cout << "--------Lista--------" << endl;
    cout << "1.- LACassino" << endl;
    cout << "2.- Bel-Air Hotel" << endl;
    cout << "3.- Republique Restaurant" << endl;
    cout << "4.- Staples Center Stadium" << endl;
    cout << "---------------------" << endl;
    Sleep(3000);
    cout << "" << endl;
    cout << "Millonario: Se cuidadoso al visitar estos lugares, te encontraras con algunas pruebas y es posible que para acceder a algunos de ellos necesites alguna clave..." << endl;
    Sleep(3000);
    cout << "Millonario: Smith no me defraudes..." << endl;
    Sleep(3000);
    cout << "Millonario: Llamame cuando tengas mi maletin." << endl;
    Sleep(3000);
    cout << "*Millonario cuelga..*" << endl;
    Sleep(3000);
    cout << endl;
}

void Ganaste(){
    cout << "Llave ingresda *puerta se abre*" << endl;
    Sleep(2000);
    cout << endl;
    cout << "Smith: Millonario??, eres tu?..." << endl;
    Sleep(2000);
    cout << "*Smith confundido*" << endl;
    Sleep(2000);
    cout << "Millonario: JA-JA-JA! *millonario rie*, excelente Smith, EXCELENTEEE!, sabia que eras el indicado." << endl;
    Sleep(2500);
    cout << endl;
    cout << "Smith: De que hablas?, todo esto fue una prueba?..., el maletin nunca existio??" << endl;
    Sleep(2000);
    cout << endl;
    cout << "Millonario: Ohh claro que no.., todo esto solo fue una prueba, y dejame reconocertelo, nunca habia visto un trabajo tan impecable..." << endl;
    Sleep(2500);
    cout << "Millonario: En unos cuantos dias mi Helicoptero pasara por ti, ya fue suficiente entrenamiento, estas listo para trabajar conmigo." << endl;
    Sleep(2500);
    cout << endl;
    cout << "*Smith sonrie*" << endl;
    Sleep(2000);
    cout << endl;
    cout << "Smith: Hagamoslo!." << endl;
    Sleep(3000);
    cout << endl;
    cout << "Coming Soon..." << endl;
    Sleep(2000);
    cout << "Smith Clues 2, Tokyo..." << endl;
    Sleep(1000);
    cout << endl;
    cout << "---------------------------------------FIN.---------------------------------------" << endl;
}

// Funciones de items
Items getLupa(){ // Funcion para activar la Lupa
    Lupa.setExiste(true);

    arregloItems[0] = Lupa;

    cout << endl;
    cout << "Bien Hecho! Respuesta Correcta" << endl;
    Sleep(1000);
    cout << endl;
    cout << "NUEVO ITEM: LUPA" << endl;
    Sleep(1000);
    cout << endl;
    cout << "LUPA: Este item sera de gran ayuda en tu travesia y te facilitara los problemas en el futuro!" << endl;
    Sleep(1000);
    cout << endl;

    return Lupa;
}

Items getLlave(){ // Funcion para activar la Llave
    Llave.setExiste(true);

    arregloItems[1] = Llave;

    cout << "Excelente, has encontrado la Llave Secreta." << endl;
    Sleep(1000);
    cout << endl;
    cout << "NUEVO ITEM: LLAVE" << endl;
    Sleep(1000);
    cout << endl;
    cout << "LLAVE: Este item te servira para poder abrir la puerta donde se encuentra el maletin!" << endl;
    Sleep(1000);
    cout << endl;
    cout << "Ahora puedes entrar al siguiente cuarto..." <<endl;
    Sleep(1000);
    cout << "Ve con cuidado, recuerda que puede que no seas el unico en busca del maletin." << endl;
    Sleep(1000);

    return Llave;
}

void getCodigo(){ // Funcion que da el codigo
    cout << "Ringgg.. Ringg.. *suena el telefono de Smith*" << endl;
    Sleep(2000);
    cout << "*Numero Desconocido...*" << endl;
    Sleep(2000);
    cout << endl;
    cout << "Anonimo: Smith..., se cuidadoso hay mas gente tras el maletin..., el codigo de acceso es: ''magia''. " << endl;
    Sleep(2000);
    cout << "*Anonimo cuelga*" << endl;
}

// Funcniones de los cuartos
void problemaSuma(int niv){ // Funcion del cuarto 1
    int respCorrecta;
    int respFinal;

    cout << "Responde correctamente para conseguir las pistas!" << endl;
    Sleep(1000);

    while (true){
        if (niv == 1){
            cout << "15 + 8"<< endl;
            respCorrecta = 15 + 8;
            cin >> respFinal;
        }
        else if (niv == 2){
            cout << "17 + 21"<< endl;
            respCorrecta = 17 + 21;
            cin >> respFinal;
        }
        else if (niv == 3){
            cout << "28 + 57"<< endl;
            respCorrecta = 28 + 57;
            cin >> respFinal;
        }
        else if (niv == 4){
            cout << "108 + 76"<< endl;
            respCorrecta = 108 + 76;
            cin >> respFinal;
        }
        else if (niv == 5){
            cout << "458 + 787"<< endl;
            respCorrecta = 458 + 787;
            cin >> respFinal;
        }

        if(respFinal==respCorrecta){
            getLupa();
            break;
        } 
        else {
            cout << "Respuesta Incorrecta! Casi encontramos la pista! Intenta de nuevo" << endl;
        }
    }  
}

void problemaResta(int niv){ // Funcion del cuarto 2
    int respCorrecta;
    int respFinal;

    cout << "Responde correctamente para conseguir el codigo!" << endl;
    Sleep(1000);

    while (true){
        if (niv == 1){
            cout << "13 - 6"<< endl;
            respCorrecta = 13 - 6;
            cin >> respFinal;
        }
        else if (niv == 2){
            cout << "21 - 5"<< endl;
            respCorrecta = 21 - 5;
            cin >> respFinal;
        }
        else if (niv == 3){
            cout << "46 - 17"<< endl;
            respCorrecta = 46 - 17;
            cin >> respFinal;
        }
        else if (niv == 4){
            cout << "219 - 33"<< endl;
            respCorrecta = 219 - 33;
            cin >> respFinal;
        }
        else if (niv == 5){
            cout << "2199 - 257"<< endl;
            respCorrecta = 2199 - 257;
            cin >> respFinal;
        }

        if(respFinal==respCorrecta){
            getCodigo();
            break;
        } 
        else {
            cout << "Respuesta Incorrecta! Casi conseguimos el codigo! Intenta de nuevo" << endl;
        }
    }
}

void problemaMultiplicacion(int niv){ // Funcion del cuarto 3
    int respCorrecta;
    int respFinal;

    cout << "Responde correctamente para conseguir la Llave Secreta!" << endl;
    Sleep(1000);

    while (true){
        if (niv == 1){
            cout << "7 * 6"<< endl;
            respCorrecta = 7 * 6;
            cin >> respFinal;
        }
        else if (niv == 2){
            cout << "12 * 3"<< endl;
            respCorrecta = 12 * 3;
            cin >> respFinal;
        }
        else if (niv == 3){
            cout << "31 * 11"<< endl;
            respCorrecta = 31 * 11;
            cin >> respFinal;
        }
        else if (niv == 4){
            cout << "56 * 44"<< endl;
            respCorrecta = 56 * 44;
            cin >> respFinal;
        }
        else if (niv == 5){
            cout << "8665 * 7"<< endl;
            respCorrecta = 8665 * 7;
            cin >> respFinal;
        }

        if(respFinal==respCorrecta){
            getLlave();
            break;
        } 
        else {
            cout << "Respuesta Incorrecta! Casi encontramos la Llave! Intenta de nuevo" << endl;
        }
    }
}

void problemaDivision(int niv){ // Funcion del cuarto 4
    int respCorrecta;
    int respFinal;

    cout << "Responde correctamente para conseguir el Maletin!" << endl;
    Sleep(1000);

    while (true){
        if (niv == 1){
            cout << "10/2"<< endl;
            respCorrecta = 10/2;
            cin >> respFinal;
        }
        else if (niv == 2){
            cout << "24/3"<< endl;
            respCorrecta = 24/3;
            cin >> respFinal;
        }
        else if (niv == 3){
            cout << "56/4"<< endl;
            respCorrecta = 56/4;
            cin >> respFinal;
        }
        else if (niv == 4){
            cout << "194/97"<< endl;
            respCorrecta = 194/97;
            cin >> respFinal;
        }
        else if (niv == 5){
            cout << "2982/426"<< endl;
            respCorrecta = 2982/426;
            cin >> respFinal;
        }

        if(respFinal==respCorrecta){
            break;
        } 
        else {
            cout << "Respuesta Incorrecta! Casi encontramos el maletin! Intenta de nuevo" << endl;
        }
    }
}

// Funciones para elegir cuarto y validar la entrada
int entrarPuerta(int c){ // Funcion para poder entrar a los cuartos
    bool entrar;
    string codigo;
    string respuestallaveDeAcceso;
    int nivel = Smith.getNivel();

    if (c == 1) {
        cuartoActual = 1;
        contCuartos++;
        problemaSuma(nivel);
    } 
    else if (c == 2) {
        if (Lupa.getExiste()){
            cuartoActual = 2;
            contCuartos++;
            problemaResta(nivel);
        }
        else {
            cout << "No cuentas con la Lupa, encuentrala para poder acceder a este cuarto." << endl;
            Sleep(1000);
        }
    } 
    else if (c == 3) {
        cout << "Introduzca el codigo secreto" << endl;
        cin >> codigo;
        if (codigo == "magia"){
            cuartoActual = 3;
            contCuartos++;
            problemaMultiplicacion(nivel);
        }
        else {
            cout << "Codigo Incorrecto..." << endl;
            Sleep(1000);
        }
        
    } 
    else if (c == 4) {
        if (Llave.getExiste()){
            cuartoActual = 4;
            contCuartos++;
            problemaDivision(nivel);
        }
        else{
            cout << "No cuentas con la Llave para poder acceder a este cuarto" << endl;
            Sleep(1000);
        }
    }
    else {
        cout << "Numero Incorrecto, seleccione un numero de cuarto valido" << endl;
        Sleep(1000);
    }

    return cuartoActual, contCuartos;
}

void elegirCuarto(){ // Funcion para elegir un cuarto
    int cuartoProximo;

    while (contCuartos < 4){
        cout << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "\t\tLlevas " << contCuartos << " de 4 cuartos explorados" << endl << endl;
        Sleep(2000);
        cout << "\t\tTe encuentras en el cuarto " << cuartoActual << ": "<< arregloHabitacion[cuartoActual].getNombre() << endl;
        Sleep(2000);
        cout << "\t\tHacia que cuarto quieres dirigirte? : " << endl << endl;
        Sleep(2000);
        cout << "\t\t\t--------Lista--------" << endl;
        cout << "\t\t1.- LACassino" << endl;
        cout << "\t\t2.- Bel-Air Hotel" << endl;
        cout << "\t\t3.- Republique Restaurant" << endl;
        cout << "\t\t4.- Staples Center Stadium" << endl;
        cout << "\t\t\t---------------------" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        Sleep(3000);
        cout << endl;
        cin >> cuartoProximo;

        entrarPuerta(cuartoProximo);
    }

    //Funcion ganaste
    Ganaste();
}


// Main

int main(){
    //---------------------------- Empieza Juego ------------------------------------------------
    cout << "Bienvenido a Simth Clues"<< endl;
    cout << "Iniciamos? s/n: " << endl;
    cin >> respuestainicio;

    Configuracion();
    //---------------------------- Inicio e Indicaciones ----------------------------------------

    if (respuestainicio == "s"){
        Inicio(); // Funcion Inicio (texto)
        if (respuestaTelefono == "s"){
            LlamadaMillonario(); // Funcion Llamada Millonario (texto)
            if (respuestaLlamadaMillonario == "s" && Smith.getExiste()){
                Indicaciones(); // Funcion Indicaciones (texto)

                // El usuario empieza a jugar
                elegirCuarto(); // Funcion para elegir Cuarto.
            }
            else{ 
                cout << "Smith: Este trabajo no es para mi..." << endl; 
                Sleep(1000);
                cout << "*Smith cuelga...*" << endl;
                Sleep(1000);
                cout << "Fin." << endl;
            }
        }
        else{
            cout<< "No esta vez, es hora de descansar." <<endl;
            Sleep(1000);
            cout<< "Fin." <<endl;
        }
    }
    else{
        cout << "Fin." << endl;
    };
}