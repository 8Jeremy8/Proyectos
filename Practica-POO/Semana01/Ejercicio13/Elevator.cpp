#include <iostream>
#include <string>
using namespace std;

class Elevator{
    public:
    int floormax;
    int floormin;
    int flooractual;

    Elevator(int fmx, int fmn){
        floormax = fmx;
        floormin = fmn;
        flooractual = fmn;
    }

    string Up(){
        if(flooractual<floormax){
            flooractual +=1;
            return "Se ha subido un piso";
        }else{
            return "Error estas en el piso maximo";
        }
    }

    string Down(){
        if(flooractual>floormin){
            flooractual -=1;
            return "Bajaste un piso";
        }else{
            return "Error te encuentras en el piso minimo";

        }
    }
};

int main(){
    Elevator elevator1(10,2);

    string up1   = elevator1.Up();
    string down1 = elevator1.Down();

    cout << up1 << endl;
    cout << down1 << endl;
    
    return 0; 
}