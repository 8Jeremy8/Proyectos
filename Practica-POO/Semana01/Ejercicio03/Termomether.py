class Thermometer:
    def __init__(self,temperature):
        self.temperature = temperature

    def aFarenheit(self):
        return (self.temperature*(9/5)) + 32

    def aKelvin(self):
        return self.temperature +273.15

thermometer1 = Thermometer(20)

afarenheit1 = thermometer1.aFarenheit()
akelvin1 = thermometer1.aKelvin()

print(f"La temperatura en Farenheit es: {afarenheit1}")
print(f"La temperatura a Kelvin es: {akelvin1}")


    

    