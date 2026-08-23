#include <iostream>
using namespace std;

class Rectangle{
    public:
    double base;
    double height;

    Rectangle(double b,double h){
        base = b;
        height = h;
    }

    double CalculateArea(){
        return height*base;
    }

    double CalculatePerimeter(){
        return 2*(height+base);
    }
};

int main(){
    Rectangle rectangle1(1,4);

    double area1 = rectangle1.CalculateArea();
    double perimeter1 = rectangle1.CalculatePerimeter();

    cout<< "El area es: " << area1 << endl;
    cout<< "El perimetro es: " << perimeter1 << endl;
    return 0;


}