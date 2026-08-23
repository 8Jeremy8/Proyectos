class Thermometer{
    double temperature;

    Thermometer(double t){
        temperature = t;
    }

    double aFarenheit(){
        return (temperature*(9.0/5)) + 32;
    }
    double aKelvin(){
        return temperature +273.15;
    }
}

public class Main{
    public static void main(String[] args){
        Thermometer thermometer1 = new Thermometer(23);

        double afarenheit1 = thermometer1.aFarenheit();
        double akelvin1 = thermometer1.aKelvin();

        System.out.println("La temperatura a Farenheit es: " + afarenheit1);
        System.out.println("La temperatura a Kelvin es: " + akelvin1);

    }
}