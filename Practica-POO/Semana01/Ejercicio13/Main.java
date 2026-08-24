class Elevator{
    int floormax;
    int floormin;
    int flooractual;

    Elevator(int fmx, int fmn ){
        floormax = fmx;
        floormin = fmn;
        flooractual = fmn;
    }

    String Up(){
        if(flooractual<floormax){
            flooractual +=1;
            return "Has subido un piso";
        }else{
            return "Error no Estas en el maximo piso";
        }
    }

    String Down(){
        if(flooractual>floormin){
            flooractual-=1;
            return "Has bajado un piso con exito";
        }else{
            return "Error estas en el piso minimo";
        }
    }
}

public class Main{
    public static void main(String[] args){
        Elevator elevator1 = new Elevator(10,2);

        String up1 = elevator1.Up();
        String down1 = elevator1.Down();

        System.out.println(up1);
        System.out.println(down1);

    }
}