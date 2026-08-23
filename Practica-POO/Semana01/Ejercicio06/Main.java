class Invoice{
    String product;
    double unitprice;
    int  amount;
    
    Invoice(String p,double u,int a){
        product = p;
        unitprice = u; 
        amount = a;
    }

    double CalculateSubTotal(){
        return unitprice*amount;
    }

    double CalculateIGV(){
        return CalculateSubTotal() * 0.18;
    }
    
    double CalculateTotal(){
        return CalculateIGV() + CalculateSubTotal();
    }
}

public class Main{
    public static void main(String[] args){
        Invoice invoice1 = new Invoice("Arroz",3.15,5);

        double subtotal1 = invoice1.CalculateSubTotal();
        double igv1 = invoice1.CalculateIGV();
        double total1 = invoice1.CalculateTotal();

        System.out.println("---Subtotal---\n" +subtotal1);
        System.out.println("---IGV---\n" + igv1);
        System.out.println("---TOTAL\n" + total1);
    }
}