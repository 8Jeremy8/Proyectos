class Rectangle{
        double base;
        double height;

        Rectangle(double b,double h){
            base = b;
            height = h;
        }
    
        double CalculateArea(){
            return base * height;
        }
        
        double CalculatePerimeter(){
            return 2*(height + base);
        }
}


public class Main{
    public static void main(String[] args){
        Rectangle rectangle1  = new Rectangle(2,3);
        double area1= rectangle1.CalculateArea();
        double perimeter1 = rectangle1.CalculatePerimeter();

        System.out.println("El area es: " + area1);
        System.out.println("El perimetro es: " + perimeter1);

    }
}