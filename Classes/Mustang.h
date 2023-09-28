#pragma once
#include "Car.h"
#include <iostream>
using namespace std;

class Mustang : public Car {
public:
    Mustang(int year) : Car("Ford", "Mustang", year) {}

    void displaySpecialFeature() const override {
        cout << "Special Feature: Classic American Muscle" << '\n';
    }
};