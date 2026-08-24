    class AccountHolder{
        String accountholder;
        double balance;

        AccountHolder(String a , double b){
            accountholder = a;
            balance = b;
        }

        String Deposit(double d){
            balance += d;
            return "Se ha realizado el deposito con exito $" + d; 
        }

        String ToWithdraw(double w){
            if (w>balance){
                return "Error no hay suficiente saldo para esta operacion";
            }else{
                balance -= w;
                return "Se ha realizado el retiro con exito";
            }
        }
    }

    public class Main{
        public static void main(String[] args){
            AccountHolder accountholder1 = new AccountHolder("Jeremy",  10000);
            String deposite1 = accountholder1.Deposit(200);
            String withdraw1 = accountholder1.ToWithdraw(300);

            System.out.println(deposite1);
            System.out.println(withdraw1);


        }
    }