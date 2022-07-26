#include <iostream>
using namespace std;

/*
    Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'. 
    Then create two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.

    Take an input variable and display the same value by pointer.
*/

int main()
{
    int a, b;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter number: ";
    cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "a: " << *ptrA << endl;
    cout << "b: " << *ptrB << endl;

    return 0;
}