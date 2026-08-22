#include <iostream>
using namespace std;

class Employ{
    public:
    string Name="";
    int Salary=0;

    int CalculateAnualSalary(){
        return Salary*12; 
    }
};

int main(){

    Employ employ1;
    Employ employ2;

    employ1.Name = "Jeremy";
    employ1.Salary = 5700;
    employ2.Name = "Eduard";
    employ2.Salary = 5800;
    int  total1 = employ1.CalculateAnualSalary();
    int total2 = employ2.CalculateAnualSalary();


    cout<< "Name: "<< employ1.Name << " , Salario: " << total1<< endl;
    cout<< "Name: "<< employ2.Name << " , Salario: " << total2<< endl;
    return 0;

}