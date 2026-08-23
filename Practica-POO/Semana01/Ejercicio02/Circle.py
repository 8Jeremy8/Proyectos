class Circle:
    def __init__(self,radius):
        self.radio = radius

    def CalculateArea(self):
        return 2*3.14*self.radio


circle1 = Circle(2)
area1 = circle1.CalculateArea()
print(f"El area es: {area1} metros")
