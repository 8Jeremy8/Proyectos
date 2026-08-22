class Employ{
    String Name = "";
    int Salary = 0;

    int CalculateAnualSalary(){
        return Salary * 12;
    }
}


public class AnualSalary{
    public static void main(String[] args){
        Employ employ1 = new Employ();
        Employ employ2 = new Employ();

        employ1.Name = "Jeremy";
        employ1.Salary = 8600;
        int total1 = employ1.CalculateAnualSalary();

        employ2.Name = "Eduard";
        employ2.Salary = 8700;
        int total2 = employ2.CalculateAnualSalary();
        System.out.println("---"+employ1.Name+"---");

        System.out.println("El Salario anual es: $" + total1);
        System.out.println("---" + employ2.Name + "---");

        System.out.println("El Salario anual es: $" + total2);



    }
}