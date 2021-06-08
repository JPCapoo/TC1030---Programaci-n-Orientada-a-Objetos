//Juan Pablo Capobianco Ramos
// A01252252
// POO
// Actividad 09 - C++ Exceptioin Handling

#include <iostream>
using namespace std;

class DivideByZero{
    public:
        DivideByZerito(string);
        string tellmeMsg();
    private:
        string errorMsg;
};

DivideByZero::DivideByZerito(string err){
    errorMsg = err;
};

string DivideByZero::tellmeMsg(){
    return errorMsg;
};

int main() {
    int num = 100;
    int num2 = 0;
    try {
        if (0 != num2)
            num2 = num / num2;
        else
            throw DivideByZero("Ups!, Algo salio mal.");
        cout <<num<<" "<<num2<<endl;
    }
    catch(DivideByZerito e) {
        cout << e.tellmeMsg() <<endl;
    }
    cout <<"Happy ENDing"<<endl;

    return 0;
}
