class Producto:
    Name = ""
    Price = 0.0
    Number = 0

    def TotalCalculate(self):
        return self.Price*self.Number

producto1 = Producto()
producto1.Name = "Arroz"
producto1.Price = 5
producto1.Number = 6

total = producto1.TotalCalculate()

print(f"Total ${total:.2f}")