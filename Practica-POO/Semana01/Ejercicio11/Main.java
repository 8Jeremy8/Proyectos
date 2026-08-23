class Fuel{
    double maxcapacity;
    double levelactuall;

    Fuel(double m, double l){
        maxcapacity = m;
        levelactuall = l;
    }

    String ChargeFuel(double c){
        levelactuall += c;
        return "Se ha cargado --> " + c;
    }
    String Consumir(double c){
        levelactuall -= c;
        return "Se ha retirado -->" + c;
    }

}

public class Main{
    public static void main(String[] args){
        Fuel fuel1  = new Fuel(100,20);


    }  
}