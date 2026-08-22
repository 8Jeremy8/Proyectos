class Person{
    String Name;
    int Age;
    String City;

    String describe(){
        return "Name: " + Name + "Age: " + Age + "Ciudad: " + City;
    }
}

public class Main{
    public static void main(String[] args){
        Person persona1 = new Person();

        persona1.Name = "Jeremy";
        persona1.Age = 20;
        persona1.City ="Lima";

         String description = persona1.describe();
         System.out.println(description);

    }
}