#include <iostream>
#include <string>
using namespace std;

class Clock{
    public:
    int hours;
    int minutes;
    int seconds;

    Clock(int h , int m , int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    string Horario(){
        return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
    }

    int TotalSeconds(){
        return (hours*3600)+(minutes*60)+seconds;
    }
};

int main(){
    Clock clock1(9,59,46);

    string hora1 = clock1.Horario();
    int totalseconds1 = clock1.TotalSeconds();
    
    cout << "Hora\n" <<"\t" << hora1 <<endl;
    cout << "Segundos totales\n" << "\t" << totalseconds1 << endl; 
    return 0;
}