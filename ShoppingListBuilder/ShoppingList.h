#pragma once
#include <vector>
#include <fstream>
#include <string>
#include <conio.h>
#include "ListItem.h"

class ShoppingList {
private:
    vector<ListItem> items;

    void displayItemNamesWithTag(string tag) {
        cout << tag << '\n';
        for (size_t i = 0; i < items.size(); ++i) {
            cout << i + 1 << ": " << items[i].getName() << '\n';
        }
    }

    void displayItemsWithTag(string tag) {
        cout << tag << '\n';
        for (size_t i = 0; i < items.size(); ++i) {
            cout << i + 1 << ": ";
            items[i].displayItem();
        }
    }

public:
    // Add an item to the list
    void addItem() {
        system("cls");
        string itemName;
        double itemPrice;
        int itemQuantity;
        cout << "What is the name of the item?: ";
        cin >> itemName;

        cout << "How much does it cost?: ";
        while (!(cin >> itemPrice)) {
            cout << "Invalid input. Please enter a valid price: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "How many will you be buying?: ";
        while (!(cin >> itemQuantity)) {
            cout << "Invalid input. Please enter a valid quantity: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        items.push_back(ListItem(itemName, itemPrice, itemQuantity));
        system("cls");
    }

    // Remove an item from the list by index
    void listAndRemoveItem() {
        system("cls");

        if (items.empty()) {
            cout << "No items to remove.\n";
            return;
        }

        displayItemNamesWithTag("Current Shopping List:");

        cout << "\nSelect the number of the item to remove (0 to cancel): ";
        int selection;
        while (!(cin >> selection) || selection < 0 || selection > (items.size())) {
            system("cls");
            displayItemNamesWithTag("Select the number of the item to remove (0 to cancel):");
            cout << "\nInvalid input. Please enter a valid number or 0 to cancel: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (selection != 0) {
            system("cls");
            items.erase(items.begin() + selection - 1);
        } 
        else 
        {
            system("cls");
        }
    }

    // Edit an item in the list by index
    void listAndEditItem() {
        system("cls");

        if (items.empty()) {
            cout << "No items to edit.\n";
            return;
        }

        displayItemsWithTag("List of Items:");

        cout << "\nSelect the number of the item to edit (0 to cancel): ";
        int selection;
        while (!(cin >> selection) || selection < 0 || selection > items.size()) {
            system("cls");
            displayItemsWithTag("Select the number of the item to edit (0 to cancel)");
            cout << "\nInvalid input. Please enter a valid number or 0 to cancel: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (selection != 0) {
            string newName;
            double newPrice;
            int newQuantity;

            // Get new values from the user
            cout << "Enter the new name: ";
            cin >> newName;

            cout << "Enter the new price: ";
            while (!(cin >> newPrice)) {
                cout << "Invalid input. Please enter a valid price: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cout << "Enter the new quantity: ";
            while (!(cin >> newQuantity)) {
                cout << "Invalid input. Please enter a valid quantity: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Apply the changes
            items[selection - 1].setName(newName);
            items[selection - 1].setPrice(newPrice);
            items[selection - 1].setQuantity(newQuantity);

            system("cls");
        }
    }

    // Display all items in the list
    void displayShoppingList() const {

        if (items.empty()) {
            cout << "No items to display.\n";
            return;
        }

        double runningTotal = 0.00;

        cout << setw(15) << left << "Product:"
            << setw(15) << right << "Price:"
            << setw(15) << right << "Quantity:"
            << setw(15) << right << "Total:" << "\n";

        for (const auto& item : items) {
            runningTotal += (item.getPrice() * item.getQuantity());
            item.displayItem();
        }

        cout << "\nGrand Total: " << fixed << setprecision(2) << runningTotal << '$' << "\n\n" << "Press Escape to exit: ";
        do {
            // Check for Escape key
            if (_getch() == 27) {
                system("cls");
                break; // Exit the loop when Escape is pressed
            }
        } while (true);
    }
};
