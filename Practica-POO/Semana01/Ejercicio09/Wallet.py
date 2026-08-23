class Waller:
    def __init__(self,saldo):
        self.saldo = saldo
        self.saldo_total = 0

    def Savings(self):
        self.saldo_total+=self.saldo
        return f"Tu ahorro es de: {self.saldo_total}"

    def BreakAlcancia(self):
        self.saldo_total = 0
        return "Se ha roto la alcansia"

waller1 = Waller(20)

savings1 = waller1.Savings()
breakalcancia1 = waller1.BreakAlcancia()



