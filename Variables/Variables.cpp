#include <iostream>
using namespace std;

int main()
{
    /*
    * Just like in other programing languages, when creating variables in C++ it consists of two parts.
    * Declaration and Initialization.
    */

    // Declaration:
    string firstName, lastName;
    bool isMale, attendingSchool;
    double height;
    int age;

    // Initialization:
    firstName = "John";
    lastName = "Doe";
    isMale = true;
    attendingSchool = false;
    height = 6.2;
    age = 55;

    // Both steps can be done on the same line of code.
    string fullName = firstName + ' ' + lastName;

    // To print out these variables to the terminal we can use see-out (cout) and <<
    cout << "Name: " << fullName << '\n';
    cout << "Age: " << age << '\n';
    cout << "Height: " << height << '\n';
    cout << "Gender: " << (isMale ? "Male" : "Female") << '\n';
    cout << "Attending School: " << (attendingSchool ? "Yes" : "No") << '\n';
}