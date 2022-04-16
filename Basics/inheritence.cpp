#include <iostream>
using namespace std;

class Teacher
{
public:
    void human()
    {
        cout << "I'm a human too hahahaha" << endl;
    }
    void teach()
    {
        cout << "I teach what's on the book that's all" << endl;
    }
};

class Student : public Teacher
{
public:
    // overriding the teach function in super class (Teacher class)
    void teach()
    {
        cout << "I teach the way you understand :)" << endl;
    }
    // Additional funtions other than teacher has
    void isFriend()
    {
        cout << "I'm your friend :)" << endl;
    }
};

int main()
{

    Teacher teacher1;
    teacher1.teach();
    Student student1;
    student1.teach();
    student1.human(); // Accessing the parent class functions
    return 0;
}