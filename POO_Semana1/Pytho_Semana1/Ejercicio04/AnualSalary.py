class Employ:
    Name = ""
    Salary = 0


    def CalculateAnualSalary(self):
        return self.Salary * 12

employ1 = Employ()
employ2 = Employ()
employ1.Name = "Jeremy"

employ1.Salary = 7800

total1 = employ1.CalculateAnualSalary()

print("Empleado: ",employ1.Name)
print("El salario anual es: ", total1)

employ2.Name = "Eduard"

employ2.Salary = 8500

total2 = employ2.CalculateAnualSalary()

print("Empleado: ",employ2.Name)
print("El salario anual es: ", total2)