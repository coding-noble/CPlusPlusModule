#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <conio.h>
using namespace std;

static class MenuHandler {
public:
    static int getMainMenu() {
        return displayMenu({ "View List", "Add Item", "Remove Item", "Edit Item", "End Program" });
    }

private:
    static int selectedOption;

    static int displayMenu(const vector<string>& options) {
        int selectedOption = 0;
        bool isValidInput = false;

        cout << "Please enter a number that corresponds with your chosen selection." << "\n";
        do {
            // Display options
            for (size_t i = 0; i < options.size(); ++i) {
                cout << i + 1 << ": " << options[i] << '\n';
            }

            // Get user input
            int userSelection = _getch();
            if (isdigit(userSelection)) {
                selectedOption = userSelection - '0';
                isValidInput = selectedOption >= 1 && selectedOption <= options.size();

                system("cls");

                if (!isValidInput) {
                    cout << "Invalid input. Please enter a valid number.\n";
                }
            }
            else {
                system("cls");
                cout << "Invalid input. Please enter a number.\n";
            }

        } while (!isValidInput);

        return selectedOption;
    }
};