class Book:
    title = ""
    author = ""
    year = 0
    available = True

    def Borrow(self):
        if self.available:
            self.available=False
            return f"Prestamo exitoso"
        else:
            return f"El libro: {self.title}, no esta disponible" 
    def BringBack(self):
        self.available=True
        return f"Libro devuelto"
book1 = Book()
book1.title ="To Kill a Mockingbird"
book1.author = "Harper Lee"
book1.year = 1960
book1.available = True

prestamo1 = book1.Borrow()
devolucion1 = book1.BringBack()
print(prestamo1)
print(devolucion1)
    