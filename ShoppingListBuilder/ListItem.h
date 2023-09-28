#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class ListItem {
private:
    string itemName;
    double price;
    int quantity;

public:
    // Constructor
    ListItem(const string& name, double itemPrice, int itemQuantity)
        : itemName(name), price(itemPrice), quantity(itemQuantity) {}

    // Getter for item name
    string getName() const {
        return itemName;
    }

    // Setter for item name
    void setName(const std::string& name) {
        itemName = name;
    }

    // Getter for item price
    double getPrice() const {
        return price;
    }

    // Setter for item price
    void setPrice(double itemPrice) {
        price = itemPrice;
    }

    // Getter for item quantity
    int getQuantity() const {
        return quantity;
    }

    // Setter for item quantity
    void setQuantity(int itemQuantity) {
        quantity = itemQuantity;
    }

    // Display item information
    void displayItem() const {

        double total = price * quantity;

        cout << setw(15) << left << itemName
            << setw(14) << right << fixed << setprecision(2) << price
            << left << '$'
            << setw(15) << right << fixed << setprecision(2) << quantity
            << setw(14) << right << fixed << setprecision(2) << total
            << left << '$' << "\n";
    }
};