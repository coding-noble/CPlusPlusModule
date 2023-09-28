#include <iostream>
using namespace std;

void sayHelloWorld(), sayGoodbyeWorld();

int addTogether(int x, int y) {
	return x + y;
}

int addTogether(int x, int y, int z) {
	return x + y + z;
}

int addTogether(int x);

int main()
{
	/*
	* Functions are awesome, they allow us to write code once and then call that code as many times as needed in other places.
	* In C++ (as far as I can tell) the functions needs to be declared before they are called but not necessarily defined beforehand (You can even declare the same return type functions on the same line. How cool is that!!!).
	* Below the main function I have initialized some of the declared functions above.
	* As you can see the sayHelloWorld function is called first and will print "Hello World!"
	*/

	sayHelloWorld(); // declared on line 4, defined or initialized on line 52
	sayGoodbyeWorld(); // declared on line 4, defined or initialized on line 56

	/*
	* The add together function is declared and defined before main so we don't need to initialize it after main.
	* However we can still overload the function and give it new functionality based on the parameters it has.
	*/

	addTogether(20, 6); // declared and initialized on line 6 (before main)
	// this code wont do anything because it returns an int and we are not doing anything with it.

	cout << addTogether(20, 6) << '\n'; // we can print it in the terminal.

	int result = addTogether(20, 6); // Or save the output in a variable.

	/*
	* We can now look at the overloaded functions. You can also define overloaded functions before and after main, as long as you have declared each one before they are called.
	* To keep everything simple we will just print the result out to the terminal.
	*/

	cout << addTogether(20) << '\n'; // result will be 26, using the overloaded function on line 60

	cout << addTogether(20, 3, 3) << '\n'; // result will be 26, using the overloaded function on line 10

	return 0;
}

void sayHelloWorld() {
	cout << "Hello World!" << '\n';
}

void sayGoodbyeWorld() {
	cout << "Goodbye World!" << '\n';
}

int addTogether(int x) {
	return addTogether(x, 6);
}