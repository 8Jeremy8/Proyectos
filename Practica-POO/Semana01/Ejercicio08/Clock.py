class Clock:
    def __init__(self,hours,minutes,seconds):
        self.hours = hours
        self.minutes = minutes
        self.seconds = seconds

    def horario(self):
        return f"{self.hours:02d}:{self.minutes:02d}:{self.seconds:02d}"

    def TotalSeconds(self):
        if (self.hours<=12):
           return (self.hours*3600)+(self.minutes*60)+self.seconds
        else:
           return ((self.hours-12)*3600)+(self.minutes*60)+self.seconds

clock1 = Clock(13,50,3)

hora1         = clock1.horario()
totalseconds1 = clock1.TotalSeconds()

print("---Hora---\n","\t",hora1 )
print("---Total Seconds---\n","\t",totalseconds1)



    