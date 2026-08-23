class Clock{
    int hours;
    int minutes;
    int seconds;

    Clock(int h,int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    String Horario(){
        return String.format("%02d:%02d:%02d",hours,minutes,seconds);
    }

    int TotalSecond(){
        return (hours*3600)+(minutes*60)+seconds;
    }
}

public class Main{
    public static void main(String[] args){
        Clock clock1 = new Clock(12,7,50);
        
        String horario1 = clock1.Horario();
        int totalsecond1 = clock1.TotalSecond();

        System.out.println("Horario\n" + "\t" + horario1);
        System.out.println("Segundos totales\n" + "\t" + totalsecond1);

    }
}