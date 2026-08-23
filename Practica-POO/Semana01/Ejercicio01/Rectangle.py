class Rectangle:
    def __init__(self,base,height):
        self.base = base
        self.height = height

    def CalculateArea(self):
        return self.base * self.height

    def CalculatePerimeter(self):
        return 2*(self.base+self.height)

rectangle1 = Rectangle(2,3)
area1 = rectangle1.CalculateArea()
perimeter1 = rectangle1.CalculatePerimeter()
print (f"El area es: {area1}")
print(f"El perimtro es: {perimeter1}")

