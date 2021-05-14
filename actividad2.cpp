#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

class Vendedor {
    public:
        string Cve_Vendedor;
        string Nombre;
        
};

class Inventario {
    public: 
        string Cve_Articulo;
        string Descripcion;
        double Precio;

    void crearProducto(string clave, string descripcion, double precio){
    Cve_Articulo = clave;
    Descripcion = descripcion;
    Precio = precio;
    }

};

class Factura {
    public:
        string NoFactura;
        string Cve_Vendedor;
        string Cve_Articulo;
        int Cantidad;
};

string GETDATE(){
    char out[14];
    std::time_t t=std::time(NULL);
    std::strftime(out, sizeof(out), "%Y%m%d%H%S", std::localtime(&t));
    Sleep(2000);  // pauses for 10 seconds
    return out;
};

void agregarProducto(Inventario arreglo[]){
    int num;
    string clave, descripcion;
    float precio;
    cout << "Ingrese el numero de productos a agregar" << endl;
    cin >> num;

    for(int i=0;i<=num-1;i++){
        cout << "Ingrese la clave del producto" << endl;
        cin >> clave;
        cout << "Ingrese la descripción del producto" << endl;
        cin >> descripcion;
        cout << "Ingrese el precio del producto" <<endl;
        cin >> precio;
        
        cout << endl;

        arreglo[i].crearProducto(clave,descripcion,precio);
    }
};

void GeneraFactura(int contadorFactura, Factura arregloF[], Vendedor v1,Inventario i2,int cant){
     Factura f1;
     f1.Cve_Vendedor = v1.Cve_Vendedor;
     f1.Cve_Articulo = i2.Cve_Articulo;
     f1.Cantidad = cant;
     f1.NoFactura = 'F'+ GETDATE();
     arregloF[contadorFactura]=f1;

};

int main(){

    Vendedor arregloV[4];
    Inventario arregloI[4];
    Factura arregloF[5];

// variable de vendedores
    Vendedor v1 = {"v100","Don Julio Estrella"};
    Vendedor v2 = {"V200","Don Esperanza Luna"};
    arregloV[0] = v1;
    arregloV[1] = v2;

// variable de inventario
    Inventario i1 = {"i100","Tornilla", 10.0};
    Inventario i2 = {"i200","Pinon Cremallera",10.0};
    Inventario i3 = {"i300","Angilo de Ackerman",10.0};
    arregloI[0]=i1;
    arregloI[1]=i2;
    arregloI[2]=i3;

    int contadorFactura=0;
    GeneraFactura(contadorFactura, arregloF, v1, i2, 32);

    
    // imprimimos todas las facturas
    cout << "Facturas Generadas "<< endl;
    cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;
    string nombreArticulo;

    for (int j=0; j<=contadorFactura; j++){
        for (int k=0;k<sizeof(arregloI)/sizeof(arregloI[0]);k++){
            if (arregloF[j].Cve_Articulo == arregloI[k].Cve_Articulo)
                nombreArticulo = arregloI[k].Descripcion;
        }
        cout <<arregloF[j].NoFactura<<"\t"
            <<arregloF[j].Cve_Vendedor<<"\t\t"
            <<arregloF[j].Cve_Articulo<<"\t"
            <<nombreArticulo<<endl;

    }

    return 0;
}
