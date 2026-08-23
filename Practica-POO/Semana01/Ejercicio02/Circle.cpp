#include <iostream>
using namespace std;

class Circle{
    public:
    double radius;

    Circle(double r){
        radius = r;
    }

    double CalculateArea(){
        return 3.14*(radius*radius);
    }
};

int main(){
    Circle circle1(2);

    double area1 = circle1.CalculateArea();

    cout << "El area es: " << area1 << endl;
}