#include <iostream>
using namespace std;

class Producto{
    public:
     string Name;
     int Amount;
     double Price;


     double CalculateTotal(){
        return Price*Amount;
     }

};

int main(){
    Producto producto1;
    producto1.Name = "Mango";
    producto1.Amount = 8;
    producto1.Price = 12.3;

    double total = producto1.CalculateTotal();

    cout <<total<< endl;
    return 0;
}