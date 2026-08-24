class Elevator:
    def __init__(self,floormax,floormin):
        self.floormax    = floormax
        self.floormin    = floormin
        self.flooractual = floormin


    def Up(self):
        if(self.flooractual<self.floormax):
            self.flooractual +=1
            return f"Subiste al siguiente piso --> {self.flooractual}"
        else:
            return "Estas en el piso maximo"

    def Down(self):
        if (self.flooractual>self.floormin):
            self.flooractual -=1
        else:
            return "Ya te encuentras en el piso minimo"
        

elevator1 = Elevator(10,2)

        
        