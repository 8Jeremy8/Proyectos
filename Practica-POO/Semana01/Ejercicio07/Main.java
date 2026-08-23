class Employ{
    String name;
    double salary;

    Employ(String n, double s){
        name = n;
        salary = s;
    }

    double Discount(){
        return salary*0.1;
    }

    double NetSalary(){
        return salary - Discount();
    }
}

public class Main{
    public static void main(String[] args){
        Employ employ1 = new Employ("Jeremy",8900);

        double discount1 = employ1.Discount();
        double netsalary1 = employ1.NetSalary();
        
        System.out.println("El descuento es:  " + discount1);
        System.out.println("El Salario neto es: " + netsalary1);

    }
}