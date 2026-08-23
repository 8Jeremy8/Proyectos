class Fuel:
    def __init__(self,maxcapacity,levelactual):
        self.maxcapacity = maxcapacity
        self.levelactual = levelactual

    def CargarCombustible(self,c):
        self.levelactual += c
        return f"Se ha cargado con exito --> {c} Litros"

    def Consumir(self,c):
        self.levelactual -=c
        return f"Se ha consumido fuel --> {c} Litros"

fuel1 = Fuel(100,0)
charge1 = fuel1.CargarCombustible(40)
consumir1 = fuel1.Consumir(20)

print(charge1)
print(consumir1)