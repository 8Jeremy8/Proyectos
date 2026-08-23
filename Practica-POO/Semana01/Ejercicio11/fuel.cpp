#include <iostream>
#include <string>
using namespace std;

class Fuel{
    public:
    double maxcapacity;
    double levelactual;

    Fuel(double m , double  l){
        maxcapacity = m;
        levelactual = l;
    }

    string ChargeFuel(double c){
        levelactual += c;
        return "Se ha recargado --> "  + to_string(c);
    }

    string Consumir(double x){
        levelactual -= x;
        return "Se ha consumido --> " + to_string(x);
    }
};

int main(){
    Fuel fuel1(200,40);
    string charge1   = fuel1.ChargeFuel(20);
    string consumir1 = fuel1.Consumir(30);

    cout << charge1 << endl;
    cout << consumir1 << endl;

    return 0;
}