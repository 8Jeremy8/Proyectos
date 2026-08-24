class SavingAccount:
    def __init__(self,accountholder,balance):
        self.accountholder = accountholder
        self.balance = balance

    def Deposit(self,d):
        self.balance += d
        return f"Se ha realizado el deposito --> {d}" 

    def ToWithdraw(self,w):
        if (w>self.balance):
            return f"Error no cuentas con saldo sufiente"
        else:
            self.balance -= w
            return f"Se ha realizado el retiro con exito"

 