class Invoice:
    def __init__(self,product,unitprice,amount):
        self.product = product
        self.unitprice = unitprice
        self.amount = amount

    def CalculateSubTotal(self):
        return self.unitprice*self.amount

    def CalculateIGV(self):
        return self.CalculateSubTotal()*0.18

    def CalculateTotal(self):
        return self.CalculateIGV() + self.CalculateSubTotal()
    

