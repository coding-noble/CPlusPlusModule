#include <iostream>
using namespace std;

int main()
{
    /*
    * There are three types of loops in C++ but two of them are very similar.
    * for loops, while loops, and do-while loops.
    */

    // Example 1: for loops
    cout << "Example 1: for loop" << '\n';
    for (int i = 1; i <= 5; ++i) {
        cout << "Iteration " << i << '\n';
    }

    // Example 2: while loops
    cout << "\nExample 2: while loop" << '\n';
    int j = 1;
    while (j <= 5) {
        cout << "Iteration " << j << '\n';
        ++j;
    }

    // Example 3: do-while loops
    cout << "\nExample 3: do-while loop" << '\n';
    int k = 1;
    do {
        cout << "Iteration " << k << '\n';
        ++k;
    } while (k <= 5);

    /*
    * The difference between while and do-while loops is a while loop will check it's condition before it runs
    * and a do-while will run the code in the curly brackets and then check the condition, making it always run one time no mater what.
    */
}