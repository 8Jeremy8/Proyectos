#include <iostream>
#include <string>
using namespace std;

class Game{
    public:
    string name;
    double healtpoints;
    double strengs;
    bool state;

    Game(string n , double h , double s){
        name = n;
        healtpoints = h;
        strengs = s;
        state = true;
    }

    string RecibirDanio(double d){
        healtpoints -= d;
        return "Has recibido daño -->" + to_string(d) + " puntos de vida";
    }

    string Healt(double h){
        healtpoints += h;
        return "Has recibido curacion --> " + to_string(h) + " puntos de vida";
    }
    string State(){
        if(healtpoints <=0){
            state = false;
            return "Moriste";
        }else{
            state = true;
            return "Sigues vivo";
        }
    }
};

int main(){
    Game game("Jeremy", 400,70);

    double ataque1= game.RecibirDanio(50);

    double healt1 = gamte.Healt(60);

    cout << ataque1 << endl;
    cout << healt1 << endl;

    return 0; 
}