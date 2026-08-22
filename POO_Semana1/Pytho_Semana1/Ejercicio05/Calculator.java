    class Calculator{
        double Numero1 = 0.0;
        double Numero2 = 0.0;

        double Add(){
            return Numero1+Numero2;
        }

        double Subtract(){
            return Numero1-Numero2;

        }

        double Divide(){
            if (Numero2==0){
                System.out.println("Error no se puede dividir entre 0");
                return 0;
            }else{
                return Numero1/Numero2;
            }
        }

        double Multiply(){
            return Numero1*Numero2;
        }
    }

    public class Calculator{
        public static void main(String[] args){
            Calculator calculator1 = new Calculator();

            calculator1.Numero1 = 8;
            calculator1.Numero2 = 0;
            
            double add1 = calculator1.Add();
            double subtract1 = calculator1.Subtract();
            double divide1 = calculator1.Divide();
            double multiply1 = calculator1.Multiply();

            System.out.println("La suma es: " + add1);
            System.out.println("La resta es: " + subtract1);
            System.out.println("La multiplicacion es: " + multiply1);
            System.out.println("La division es : " + divide1);

        }
    }