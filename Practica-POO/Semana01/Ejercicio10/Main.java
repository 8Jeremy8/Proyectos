class Game{
    String name;
    double healtpoints;
    double streng;
    boolean state = true;

    Game(String n, double h, double s){
        name = n;
        healtpoints = h;
        streng = s;
    }

    String RecibirAtaque(double d){
        healtpoints -=d;
        return "Recibiste " + d + "puntos de daño";
    }

    String Healt(double h){
        healtpoints += h;
        return "Recibiste curacion -->" + h + "puntos de vida";
    }

    String State(){
        if (healtpoints <=0){
            state = false;
            return "Moriste";
        }else{
            state=true;
            return "Sigues vivo";
        }
    }
}

public class Main{
    public static void main(String[] args){
        Game person1 = new Game("Jeremy",400,80);


    }
}