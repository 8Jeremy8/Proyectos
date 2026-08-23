class Circle{
    double radius;

    Circle(double r){
        radius = r;
    }

    double CalculateArea(){
        return 3.14*(radius*radius);
    }
}

public class Main{
    public static void main(String[] args){
        Circle circle1 = new Circle(2);

        double area1 = circle1.CalculateArea();

        System.out.println("El area es: " + area1 + " metros");

    }
}