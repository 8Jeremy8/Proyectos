class Calculator:
        Numero1 = 0.0
        Numero2 = 0.0

        def Add(self):
            return self.Numero1 + self.Numero2

        def Divide(self):
            if (self.Numero2 == 0):
             return f"No se puede dividir entre 0"  
            else:
                return (self.Numero1)/(self.Numero2)
        
        def Subtract(self):
            return self.Numero1 - self.Numero2

        def Multiply(self):
            return self.Numero1 * self.Numero2


calculator1 = Calculator()
calculator1.Numero1 = 5
calculator1.Numero2 = 0

add1 = calculator1.Add()
subtract1 = calculator1.Subtract()
divide1 = calculator1.Divide()
multiply1 = calculator1.Multiply()

print(f"La suma es: {add1}")
print(f"la resta es: {subtract1}")
print(f"La division es: {divide1}")
print(f"La multiplicaion es: {multiply1}")

            

        