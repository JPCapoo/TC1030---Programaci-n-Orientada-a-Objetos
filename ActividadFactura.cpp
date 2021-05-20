#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include <sstream> // for stringstream for tokenizing
#include <fstream> // open an archive
#include <vector>

using namespace std;

class Vendedor {                    // clase vendedor
        private:
        string Clave_Vendedor;        // clave del vendedor
        string Nombre;              // nombre del vendedor
        
        public:
        void setDatos(string clave, string nombre){
            Clave_Vendedor = clave;
            Nombre = nombre;

        }
        string obtenerClave(){return Clave_Vendedor;}
        string obtenerNombre(){return Nombre;}
};

void agregarVendedor(vector <Vendedor> &vecVend){
    int num, i;
    string claveVendedor, nombreVendedor;
    Vendedor ven;

    cout << "Ingrese el numero de vendedores que se agregaran" << endl; cin >> num;

    for (i = 0; i < num; i++){
        cout << "Clave del vendedor:" << endl; cin >> claveVendedor;
        cout << "Nombre del vendedor:" << endl; cin >> nombreVendedor;

        ven.setDatos(claveVendedor, nombreVendedor);

        vecVend.push_back(ven);
    }
};

class Inventario {
    public:
    string obtenerClave(){return Clave_Articulo;}
    string getDes(){return Descripcion;}
    double getPre(){return Precio;}
    
    void setArticulo(string Clave, string Desc, double Prec){
        Clave_Articulo = Clave;
        Descripcion = Desc;
        Precio = Prec;
    }  
        
    private:
        string Clave_Articulo;
        string Descripcion;
        double Precio;
};

void agregarProducto(Inventario arreglo[]){
            int num;
            string Clave, Descripcion;
            double Precio;

            cout << "Ingrese el numero de productos que se agregaran" << endl;
            cin >> num;

            for(int i=1;i<=num;i++){
                    cout << "Ingrese la clave del producto"<< endl; cin >> Clave;
                    cout << "Ingrese la Descripcion del producto"<< endl; cin >> Descripcion;
                    cout << "Ingrese el precio del producto "<< endl; cin >> Precio;
                    cout << endl;

                    arreglo[i-1].setArticulo(Clave, Descripcion, Precio);
            }
    }  

class Factura {
    public:
        string NoFactura;
        string Clave_Vendedor;
        string Clave_Articulo;
        int Cantidad;
};

string GETDATE(){
    char out[14];
    std::time_t t=std::time(NULL);
    std::strftime(out, sizeof(out), "%Y%m%d%H%S", std::localtime(&t));
    Sleep(2000);
    return out;
};

void GeneraFactura(int contadorFactura, Factura arregloF[], vector <Vendedor> &vecVend , Inventario i2, int Cant){

    Factura f1;
    f1.Clave_Vendedor = vecVend[1].obtenerClave();
    f1.Clave_Articulo = i2.obtenerClave();
    f1.Cantidad = Cant;
    f1.NoFactura = "F" + GETDATE();
    arregloF[contadorFactura] = f1;
};

int main() {

    vector <Vendedor> vectorVendedor;
    Inventario arregloI[5];
    Factura arregloF[5];
    string nombreArticulo;
    int contadorFactura = 1;

    agregarVendedor(vectorVendedor);
    agregarProducto(arregloI);
    
    GeneraFactura(contadorFactura, arregloF, vectorVendedor , arregloI[1], 32);

    // imprimimos todas las facturas
    cout << "Facturas Generadas "<< endl;
    cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;

    for (int j = 0; j <= contadorFactura; j++){
        for (int k = 0;k < sizeof(arregloI)/sizeof(arregloI[0]);k++){
            if (arregloF[j].Clave_Articulo == arregloI[k].obtenerClave())
                nombreArticulo = arregloI[k].getDes();
        }
        cout <<arregloF[j].NoFactura<<"\t"
            <<arregloF[j].Clave_Vendedor<<"\t\t"
            <<arregloF[j].Clave_Articulo<<"\t"
            <<nombreArticulo<<endl;
    }
    return 0;
}