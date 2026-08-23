#include <iostream>
#include <string>
using namespace std;

class Employ{
    public:
    string name;
    double salary;

    Employ(string n , double s){
        name = n;
        salary = s;
    }

    double Discount(){
        return salary*0.1;
    }

    double NetSalary(){
        return salary-Discount();
    }
};

int main(){
    Employ employ("Jeremy", 12500);

    double discount1 = employ.Discount();
    double netsalary1 = employ.NetSalary();
    cout << "El descuento es de: " << discount1 << endl;
    cout << "El salario neto es de: " << netsalary1 << endl;
    
    return 0;
}