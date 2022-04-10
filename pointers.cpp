#include <iostream>
using namespace std;

int main()
{
    int age = 22; // creating a integer variable age

    int *pAge = &age; // Creating *(Pointer) varibale to store the address of age using & operator

    cout << pAge << endl;  // Printing Address (Hexa decimal) where the data of age is stored in RAM.
    cout << *pAge << endl; // Dereferencing Pointer using * to get the value stored in that address.

    /* We can also get the address/ Derefenced value with direct varible name
    &age gives address then we chain with * to get value */

    cout << &age << endl; // address 0x000000
    cout << *&age;        // 22

    return 0;
}