#pragma once
#include <iostream>
using namespace std;

class Car
{
public:
    // Define constructor with parameters
    Car(string make, string model, int year);

    // Define member functions
    void displayInfo(); // Displays car info
    int getYear() const; // gets the year of the car
    void setYear(int year); // sets the year of the car

    // Pure virtual function (making Car an abstract class)
    virtual void displaySpecialFeature() const = 0;

    /*
    * The declaration of const after the getYear and displaySpecialFeature function lets the compiler know that you can safely creat a const object of the Car class derivatives and then call those functions on it.
    * The = 0; on the pure virtual function indicates that the displaySpecialFeature() function must be overwritten in all the derived classes.
    */

private:
    // Private attributes/fields
    string make;
    string model;
    int year;
};

// Initialize the Car class constructor
Car::Car(string make, string model, int year) {
    this->make = make;
    this->model = model;
    this->year = year;
}

// Initialize the displayInfo member function
void Car::displayInfo() {
    cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << '\n';
}

// Initialize the getYear member function
int Car::getYear() const {
    return year;
}

// Initialize the setYear member function
void Car::setYear(int year) {
    this->year = year;
}
