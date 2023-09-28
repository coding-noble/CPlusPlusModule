#include <iostream>
#include "STLHeaders.h"
using namespace std;

const string doubleSpace = "\n\n";

int main()
{
    // Vector
    // Dynamic array that can resize itself
    cout << "Vector Example:\n";
    vector<int> myVector = { 1, 2, 3, 4, 5 };
    for (const auto& elem : myVector) { 
        // const helps with Const-Correctness
        // auto allows the compiler to automatically deduce the type of the elements in the container
        // & shows that we are working with references and not copies of the elements improving preformence
        cout << elem << " ";
    }
    cout << doubleSpace;

    // List
    // Doubly-linked list container
    cout << "List Example:\n";
    list<string> myList = { "apple", "banana", "orange" };
    for (const auto& elem : myList) {
        cout << elem << " ";
    }
    cout << doubleSpace;

    // Set
    // Unique container
    cout << "Set Example:\n";
    set<double> mySet = { 3.14, 2.71, 1.618, 3.14 }; // Duplicates are ignored, result is mySet = { 3.14, 2.71, 1.618 };
    for (const auto& elem : mySet) {
        cout << elem << " ";
    }
    cout << doubleSpace;

    // Map
    // Associative container that stores key-value pairs
    cout << "Map Example:\n";
    map<int, string> myMap = { {1, "one"}, {2, "two"}, {3, "three"} };
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << "\n";
    }
    cout << "\n";

    // Queue
    // Container that follows the First In, First Out (FIFO) principle
    cout << "Queue Example:\n";
    queue<string> myQueue;
    myQueue.push("first"); // enqueue first
    myQueue.push("second"); // enqueue second
    myQueue.push("third"); // enqueue third
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop(); // This removes the element at the front of the queue
    }
    cout << doubleSpace;

    return 0;
}