class Rectangle:
    height = 0.0
    base = 0.0

    def CalculateArea(self):
        return self.height*self.base


    def CalculatePerimeter(self):
        return 2*(self.height+self.base)



rectangle1 = Rectangle()

rectangle1.height = 8

rectangle1.base = 4

rectangle2 = Rectangle()

rectangle2.height = 3

rectangle2.base = 2

total_area1 = rectangle1.CalculateArea()

total_perimeter1 = rectangle1.CalculatePerimeter()
print(f"El área es: {total_area1} , \n El perimetro es: {total_perimeter1}")

total_area2 = rectangle2.CalculateArea()

total_perimeter2 = rectangle2.CalculatePerimeter()

print(f"El área es: {total_area2} , \n El perimetro es: {total_perimeter2}")

