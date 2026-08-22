class Producto{
    String Name = "";
    double Price = 0.0;
    int Amount = 0;

    double CalculateTotal(){
        return Price*Amount;
    }
}

public class Main{
    public static  void main(String[] args){
        Producto producto1 = new Producto();
        producto1.Name = "Huevo";
        producto1.Price = 7.8;
        producto1.Amount = 5;
         double total = producto1.CalculateTotal();
         System.out.println("Total: " + total);

    }
}