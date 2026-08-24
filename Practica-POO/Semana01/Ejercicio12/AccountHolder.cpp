#include <iostream>
#include <string> 
using namespace std;

class AccountHolder{
    public:
    string name;
    double balance;

    AccountHolder(string n , double b){
        name = n;
        balance = b;
    }

    string Deposit(double d){
        balance += d;
        return "Se ha realizado el deposito con exito --> " + to_string(d);
    }

    string ToWithDraw(double d){
        if (d>balance){
            return "Error no cuentas con saldo suficiente";
        }else{
            balance-= d;
            return "Se ha realizado el retiro con exito";
        }
    }
};


int main(){
    AccountHolder accountholder1("Jeremy",20000);

    string deposit1 = accountholder1.Deposit(200);

    string towithdraw1 = accountholder1.ToWithDraw(200);

    cout << deposit1 <<  endl; 
    cout << towithdraw1 << endl;
}