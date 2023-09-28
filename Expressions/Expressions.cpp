#include <iostream>
using namespace std;

int main() {
    /*
    * There are 5 different types of expressions in C++
    * Arithmetic
    * Relational
    * Logical
    * Conditional
    * Assignment
    */

    // Arithmetic
    cout << "Arithmetic Expressions\n";

    /* 
    * An arithmetic expression is just a simple math statement.
    * When working with number variables we can use arithmetic expression which include
    * +, -, *, /, and % (Modulus)
    * to manipulate them.
    */

    int a = 10, b = 5;
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulus = a % b;

    cout << "Addition: " << addition << '\n';
    cout << "Subtraction: " << subtraction << '\n';
    cout << "Multiplication: " << multiplication << '\n';
    cout << "Division: " << division << '\n';
    cout << "Modulus: " << modulus << '\n';

    getchar();
    system("cls");
    // Relational
    cout << "Relational Expressions\n";

    /*
    * Relational expressions always return a boolean, the operators are
    * == (is equal to)
    * != (is not equal to)
    * >  (is greater than)
    * <  (is less than)
    * we can use the int variables a and b from earlier.
    */

    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isGreaterThan = (a > b);
    bool isLessThan = (a < b);

    cout << "Is Equal: " << isEqual << '\n';
    cout << "Is Not Equal: " << isNotEqual << '\n';
    cout << "Is Greater Than: " << isGreaterThan << '\n';
    cout << "Is Less Than: " << isLessThan << '\n';

    getchar();
    system("cls");
    // Logical
    cout << "Logical Expressions\n";
    /*
    * There are three logical expressions that help us make more complex statements and they are
    * && (and),|| (or), and ! (not)
    * these are used along with the other boolean expressions to ask if both or just one or non are true (or false)
    */

    bool boolX = true, boolY = false;
    bool logicalAnd = (boolX && boolY);
    bool logicalOr = (boolX || boolY);
    bool logicalNot = !boolX;

    cout << "Logical AND: " << logicalAnd << '\n';
    cout << "Logical OR: " << logicalOr << '\n';
    cout << "Logical NOT: " << logicalNot << '\n';

    getchar();
    system("cls");
    // Conditional
    cout << "Conditional or the Ternary Operator\n";
    /*
    * The Ternary Operator allows us to set a variable to one thing if something is true and something else if its false.
    */

    int max = (a > b) ? a : b;

    cout << "Max value is: " << max << '\n';

    getchar();
    system("cls");
    // Conditional
    cout << "Assignment Expressions\n";
    /*
    * Lastly there are five assignment operators that allow us to simplify arithmetic expressions that have the variable being manipulated as one of it's parts.
    */

    int x = 5;
    x += 3; // same as x = x + 3
    x -= 2; // same as x = x - 2
    x *= 4; // same as x = x * 4
    x /= 2; // same as x = x / 2
    x %= 3; // same as x = x % 3

    cout << "Updated x: " << x << '\n';

    return 0;
}
