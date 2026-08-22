#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string Name;
    int Age;
    string City;

    string describe() {
        return "Name: " + Name + " Age: " + to_string(Age) + " City: " + City;
    }
};

int main() {
    Person person1;
    person1.Name = "Jeremy";
    person1.Age = 20;
    person1.City = "Lima";

    string description = person1.describe();
    cout << description << endl;

    return 0;
}