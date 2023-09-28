#pragma once
#include "Car.h"
#include <iostream>
using namespace std;

class Maserati : public Car {
public:
    Maserati(int year) : Car("Maserati", "GranTurismo", year) {}

    void displaySpecialFeature() const override {
        cout << "Special Feature: Italian Luxury" << '\n';
    }
};