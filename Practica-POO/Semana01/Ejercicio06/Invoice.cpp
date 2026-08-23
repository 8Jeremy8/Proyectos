#include <iostream>
using namespace std;

class Invoice{
    public:
    string product;
    double unitprice;
    int amount;

    Invoice(string p,double u, int a){
        product = p;
        unitprice = u;
        amount = a;
    }

    double CalculateSubTotal(){
        return unitprice*amount;
    }

    double CalculateIGV(){
        return CalculateSubTotal()*0.18;
    }

    double CalculateTotal(){
        return CalculateIGV() + CalculateSubTotal();
    }
};

int main(){
    Invoice invoice1("Mermelada",8.9,4);

    double subtotal1 = invoice1.CalculateSubTotal();
    double igv1 = invoice1.CalculateIGV();
    double total1 = invoice1.CalculateTotal();
    cout << "---SUBTOTAL---\n" <<subtotal1<< "---IGV---\n" << igv1 << "---TOTAL---\n" << total1 << endl;
    
    return 0;
}