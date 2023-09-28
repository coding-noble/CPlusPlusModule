#pragma once
#include "Car.h"
#include <iostream>
using namespace std;

class Tesla : public Car {
public:
    Tesla(int year) : Car("Tesla", "Model X", year) {}

    void displaySpecialFeature() const override {
        cout << "Special Feature: Electric Power" << '\n';
    }
};