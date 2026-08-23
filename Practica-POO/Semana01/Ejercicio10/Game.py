class Game:
    def __init__(self,name,healtpoints,streng):
        self.name = name 
        self.healtpoints = healtpoints
        self.streng = streng
        self.estadu = True

    def RecibirAtaque(self,daño):
        self.healtpoints -= daño
        return f"Recibiste --> {daño} puntos de daño"

    def Healt(self,healt):
        self.healtpoints +=healt
        return f"Recibiste curacion --> {healt} puntos de vida"

    def estado(self):
        if(self.healtpoints>0):
            self.estadu = True
            return "Sigues vivo"
        else:
            self.estadu = False
            return "Moriste"

person1 = Game("Jeremy",100,20)
ataque1=person1.RecibirAtaque(40)
healt1 = person1.Healt(50)


