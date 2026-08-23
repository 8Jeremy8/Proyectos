#include <iostream>
#include <string>
using namespace std;

class Waller{
    public:
    double saldo;
    double monto = 0;

    Waller(double s){
        saldo = s;
    }

    string Ahorro(){
        monto += saldo;
        return "Ahorro exitoso -->" + to_string(monto);
    }

    string BreakChanchito(){
        monto = 0;
        return "Se ha roto el chanchito -->" + to_string(monto);
    }
};

int main(){
    Waller waller1(500);
    return 0;
}