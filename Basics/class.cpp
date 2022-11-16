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

    /* Constructors are executed whenever we create an object
        so we use it make initial values if no value is passed while
        creating object default constructor will be executed with default
        values mentioned in it.*/

    // Creating Default Constructor
    Animal()
    {
        category = "Not Mentioned";
        sound = "Not Mentioned";
        noOfLegs = 0;
    }

    // Creating constructor with arguments
    Animal(string aCategory, string aSound, int aNoOfLegs)
    {
        category = aCategory;
        sound = aSound;
        noOfLegs = aNoOfLegs;
    }
};

int main()
{
    /* Creating Dog with Animal template with attributes.
    (Make use of parametrized construtor)*/

    Animal dog("Mammal", "Bark", 4);

    Animal cat("Mammal", "Meow", 4);

    // No parameter given so default one will be executed
    Animal unknown;

    cout << cat.sound << endl; // Meow
    cout << unknown.sound;     // Not Mentioned

    return 0;
}


// Class declaration with scope resolution operator ::
// Usefull for exporting functions

 #include <iostream>
using namespace std;

class Phone
{
    public:
        int charge;
        Phone();
        void use();
        void getCharge();
};

Phone::Phone(){
    charge = 100;
}
void Phone::use(){
    charge -=10;
}
void Phone::getCharge(){
    cout << charge;
}

int main() {
    Phone p;
    p.use();
    Phone *ptr = &p;
    ptr->getCharge();
} 
