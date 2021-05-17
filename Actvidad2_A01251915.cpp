#include <iostream>
#include <functional>
#include <ctime>
 
using namespace std;
 
class Vendedor {
    public:
        Vendedor(); 
    void getVendedor(string clave_Vendedor, string nombre);
        string verCve_vendedor(){
            return Cve_vendedor;
            };
        string verNombre(){
            return Nombre;
            };
        private:
            string Cve_vendedor;
            string Nombre;
};

Vendedor::Vendedor() {
    Cve_vendedor = "Vacante";
    Nombre = "Nadie";
};

class Inventario {
    public:
    Inventario(); // default constructor
    void getVendedor(string cve_articulo, string descripcion, double precio);
    string verCve_Articulo(){
        return Cve_Articulo;
        };
    string verDescripcion(){
        return Descripcion;
        };
    double verPrecio(){
        return Precio;
        };
    private:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
};

Inventario::Inventario() {
    Cve_Articulo = "ninguno";
    Descripcion = "no hay";
    Precio = 0.0;
};

class Factura {
    public:
    Factura();
    void getFactura(string numero_factura, string cve_vendedor, string cve_articulo, int cantidad, double p);
    string verNoFactura(){
        return NoFactura;
        };
    string verCve_vendedor(){
        return Cve_vendedor;
        };
    string verCve_Articulo(){
        return Cve_Articulo;
        };
    int verCantidad(){
        return Cantidad;
        };
    double verPrecio(){
        return Precio;
        };
    private:
        string NoFactura;
        string Cve_vendedor;
        string Cve_Articulo;
        int Cantidad;
        double Precio;
};

Factura::Factura() {
    NoFactura = "no generada";
    Cve_vendedor = "no hay";
    Cve_Articulo = "ninguno";
    Cantidad = 0;
    Precio = 0.0;
}; 

int main(){

    Vendedor vendedor;
    Inventario inventario;
    Factura factura;

cout<<vendedor.verCve_vendedor()<<" "<<vendedor.verNombre()<<endl;
cout<<inventario.verCve_Articulo()<<" "<<inventario.verDescripcion()<<" "<<inventario.verPrecio()<<endl;
cout<<factura.verNoFactura()<<" "<<factura.verCve_vendedor()<<" "<<factura.verCve_Articulo()<<" "<<factura.verCantidad()<<" "<<factura.verPrecio()<<endl;

}
