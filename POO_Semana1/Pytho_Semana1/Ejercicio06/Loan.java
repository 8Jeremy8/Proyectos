class Book{
    String title = "";
    String author = "";
    int year = 0;
    boolean available = true;

    String  Borrow(){
        if(available){
            available = false;
            return "Prestamo exitoso";
        }else{
            return "Libro no disponible";
        }
    }

    String  BringBack(){
        available = true;
        return "Devolucion exitosa";
    }
}

public class Loan{
    public static void main(String[] args){
        Book book1 = new Book();

        book1.title = "To Kill a Mockingbird";
        book1.author = "Harper Lee";
        book1.year = 1960;
        book1.available = true; 

        String prestamo1 = book1.Borrow();
        String devolucion1 = book1.BringBack();
        System.out.println(prestamo1);
        System.out.println(devolucion1);

    }
}