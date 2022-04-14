#include <iostream>

using namespace std;

/*
    Bitwise operators are comparatively faster than arithmetic operators
    because it works on bit level (Bit by Bit) in memory
    use () after "<<"" in cout line to avoid errors.
*/

int main()
{

    int a = 3; // 3 -> 0000 0011
    int b = 7; // 7 -> 0000 0111

    /* & AND operator both are true then true if no then false
    (1 + 1 = 1, otherwise 0)*/

    cout << (a & b) << endl; // 0000 0011 -> 3

    /* | OR operator if any value is true then true if none true then false.
    (0 + 0 = 0, otherwise 1)*/

    cout << (a | b) << endl; // 0000 0111 -> 7

    /* ^ XOR "!MOST IMPORTANT OPERATOR" returns true if both are different ,false if both are same
    ( 0 + 1 = 1 or 1 + 0 = 1, 1 + 1 = 0, 0 + 0 = 0)*/

    cout << (a ^ b) << endl; // 0000 0100 -> 4

    /* Left shift - left shifts the first first value, second value determines the no of positions to shift
    Here  a -> 3 // 0000 0011 and second value is 1 so we shift a's values left by 1
    so result will be 0000 0110 -> 6 */

    // !Important left shift by 1 also means multiply by 2 (does the job faster than a * 2)

    cout << (a << 1) << endl; // 0000 0110 -> 6

    /* Right shift - right shifts the first first value, second value determines the no of positions to shift
    Here  b -> 7 // 0000 0111 and second value is 1 so we shift a's values left by 1
    so result will be 0000 0011 -> 6
     */

    // !Important right shift by 1 also means divide by 2 (does the job faster than a / 2)

    cout << (b >> 1) << endl; // 0000 0011 -> 3

    // BITWISE NOT operator returns inverse the bits ( 0 -> 1 and 1 -> 0)

    cout << (~a) << endl; // ...11111111 0100 ->  (-)4  ~ changes the sign

    return 0;
}