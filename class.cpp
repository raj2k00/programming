#include <iostream>
using namespace std;

/* Defining class for Animal (Class is Template).
It's attributes are declared under public */

class Animal
{
public:
    string category;
    string sound;
    int noOfLegs;
};

int main()
{
    // Creating Dog with Animal template
    Animal dog;

    // Defining it's attributes
    dog.category = "Mammal";
    dog.sound = "Bark";
    dog.noOfLegs = 4;

    Animal cat;

    cat.category = "Mammal";
    cat.sound = "Meow";
    cat.noOfLegs = 4;

    cout << cat.sound;

    return 0;
}