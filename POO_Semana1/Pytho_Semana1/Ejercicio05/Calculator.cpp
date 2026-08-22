#include <iostream>
using namespace std;

class Calculator{
    public:
        double Numero1;
        double Numero2;

    double Add(){
        return Numero1+Numero2;
    }

    double Subtract(){
        return Numero1-Numero2;
    }

    double Divide(){
        if(Numero2==0){
            cout<<"Error no pude divirse entre 0"<<endl;
            return 0;
        }else{
            return Numero1/Numero2;
        }
    }

    double Multiply(){
        return Numero1*Numero2;
    }-
};

int main(){
    Calculator calculator1;

    calculator1.Numero1 = 5;
    calculator1.Numero2 = 0;

    double add1 = calculator1.Add();
    double abstract1 = calculator1.Subtract();
    double divide1 = calculator1.Divide();
    double multiply1 = calculator1.Multiply();

    cout<<"La suma es: " << add1 << endl;
    cout<<"La resta es: "<< abstract1 << endl;
    cout<<"La division es : "<< divide1 << endl;
    cout<<"La multiplicacion es: "<< multiply1 << endl;
    
    return 0;
}