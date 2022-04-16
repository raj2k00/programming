#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string department;
    double cgpa;

    Student(string aName, string aDepartment, double aCgpa)
    {
        name = aName;
        department = aDepartment;
        cgpa = aCgpa;
    }

    /* Object Functions. Just like normal functions it can be called
     from the created object  */

    bool hasFirstClass()
    {
        if (cgpa > 7.0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // Creating Objects
    Student student1("Gokul", "IT", 7.0);
    Student student2("Kishore", "CSE", 8.0);
    Student student3("Naveen", "CSE", 7.5);

    // Executing the Object Functions
    cout << student2.hasFirstClass();

    return 0;
}