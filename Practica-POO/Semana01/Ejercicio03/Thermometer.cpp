#include <iostream>
using namespace std;

class Thermometer{
    public:
    double temperature;

    Thermometer(double t){
        temperature = t;
    }

    double aFarenheit(){
        return (temperature*(9.0/5)) + 32;
    }

    double aKelvin(){
       return temperature +273.15;
    }
};

int main(){
    Thermometer thermometer1(25);

    double afarenheit1 = thermometer1.aFarenheit();
    double akelvin1 = thermometer1.aKelvin();
    
    cout << "La temperatura a Farenheit es: " << afarenheit1 << endl;
    cout << "La temperatura a Kelvin es: " << akelvin1 << endl;
    return 0;

}
