#include <iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    int year;
    bool available;

    string Borrow(){
        if(available){
            available = false;
            return "Prestamo exitoso.";
        }else{
            return "Error libro no disponible";
        }

    }
    
    string BringBack(){
        available = true;
        return "devolucion exitosa";
    }
};

int main(){
    Book book1;
    book1.title = "To Kill a Mockingbird";
    book1.author = "harper Lee";
    book1.year = 1960;
    book1.available = true;

    string prestamo1 = book1.Borrow();
    string devolucion1 = book1.BringBack();
    
    cout << prestamo1 << endl;
    cout << devolucion1 << endl;
}