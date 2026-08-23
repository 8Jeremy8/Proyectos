#include <iostream>
using namespace std;

class Calculator{
    public:
    double number1;
    double number2;

    Calculator(double n1 , double n2){
        number1 = n1;
        number2 = n2;
    }

    double Add(){
        return number1+number2;
    }

    double Subtract(){
        return number1-number2;
    }

    double Divide(){
        return number1/number2;
    }

    double Multiply(){
        return number1*number2;}
};

int main(){
    Calculator calculator1(2,5);
    return 0;
}