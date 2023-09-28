#include <iostream>
using namespace std;

int main()
{
    /*
    * There are really only two different types of conditional statements and they are if & else, and switch statements.
    * But they can be used many different ways.
    */

    // Example 1: Simple if statement
    int number = 26;
    if (number > 0) { // the code within the curly brackets will only run if number is greater than 0
        cout << "Example 1: The number is positive." << '\n';
    }

    // Example 2: if-else statement
    int anotherNumber = -26;
    if (anotherNumber > 0) { // Run this code if anotherNumber is greater than 0
        cout << "Example 2: The number is positive." << '\n';
    }
    else { // Otherwise run this code
        cout << "Example 2: The number is negative." << '\n';
    }

    // Example 3: if-else statement using else if
    // Same as before just with more checks using else if
    int score = 75;
    if (score >= 90) { 
        cout << "Example 3: Grade A" << '\n';
    }
    else if (score >= 80) {
        cout << "Example 3: Grade B" << '\n';
    }
    else if (score >= 70) {
        cout << "Example 3: Grade C" << '\n';
    }
    else {
        cout << "Example 3: Grade F" << '\n';
    }

    // Example 4: Nested if statement
    // you can also put if statements inside of if statements
    int x = 10, y = 20;
    if (x > 0) {
        if (y > 0) {
            cout << "Example 4: Both x and y are positive." << '\n';
        }
        else {
            cout << "Example 4: x is positive, but y is negative." << '\n';
        }
    }
    else {
        cout << "Example 4: x is negative." << '\n';
    }

    // Example 5: Switch statement
    // Switch statements can be very useful. In this example we can use a char as our variable and can have different code run based on what char it is.
    char grade = 'B';
    switch (grade) {
    case 'A': // run if grade == 'A'
        cout << "Example 5: Runs when grade is \'A\'" << '\n';
        break;
    case 'B': // run if grade == 'B'
        cout << "Example 5: Runs when grade is \'B\'" << '\n';
        break;
    case 'C': // run if grade == 'C'
        cout << "Example 5: Runs when grade is \'C\'" << '\n';
        break;
    default: // if non of the others run this one will run by default.
        cout << "Example 5: Default runs if no other cases are true." << '\n';
    }

    return 0;
}