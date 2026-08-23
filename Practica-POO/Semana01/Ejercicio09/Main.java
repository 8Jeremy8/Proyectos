class Waller{
    double saldo;
    double monto = 0;

    Waller(double s){
        saldo = s;
    }

    String Ahorro(){
        monto+=saldo;
        return "Se ahorró con exito -->" + monto;
    }

    String BreakAlcancia(){
        monto =0;
        return "Se rompió la alcancia";
    }

    
}

public class Main{
    public static void main(String[] args){
        Waller waller1 = new Waller(20);



    }
}