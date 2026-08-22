class Producto{
    String Name= "";
    double Price = 0.0;
    int Amount = 0;

    double CalculateArea(){
        return Price*Amount;
    }
    double CalculatePerimeter(){
        return 2*(Price+Amount);
    }
}

public class Rectangle{
    public static void main(String[], args){

        Producto producto1 = new Producto();
        producto1.Name = "Leche";
        producto1.Price = 10.0;
        producto1.Amount = 4;
        double total_area = producto1.CalculateArea();
        double total_perimeter = producto1.CalculatePerimeter();

        System.out.println("El area es: " + total_area)
        System.out.println("El perimetro es: " + total_perimeter)

    }
}