class Person:
    Name = ""
    Age = 0
    City = ""

    def Describe(self):
        return f"Name: {self.Name} Age: {self.Age} City: {self.City}"


person1 = Person()
person1.Name = "Jeremy"
person1.Age = 20 
person1.City = "Lima"
description = person1.Describe()
print(description)