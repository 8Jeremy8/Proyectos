class Employ:
    def __init__(self,name,salary):
        self.name = name 
        self.salary = salary

    def Discount(self):
        return self.salary*0.1

    def NetSalary(self):
        return self.salary - self.Discount()


employ1 = Employ("Jeremy",7500)

discount1 = employ1.Discount()
netsalary1 = employ1.NetSalary()

print(f"El descuento es de: {discount1}")
print(f"El salario neto es: {netsalary1}")