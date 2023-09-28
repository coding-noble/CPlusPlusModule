#include <iostream>
#include "ShoppingList.h"
#include "MenuHandler.h"
using namespace std;

int main()
{
    ShoppingList shoppingList = ShoppingList();
    bool runProgram = true;

    while (runProgram)
    {
        switch (MenuHandler::getMainMenu())
        {
        case 1: {
            shoppingList.displayShoppingList();
            break;
        }
        case 2: {
            shoppingList.addItem();
            break;
        }
        case 3: {
            shoppingList.listAndRemoveItem();
            break;
        }
        case 4: {
            shoppingList.listAndEditItem();
            break;
        }
        case 5: {
            runProgram = false;
            break;
        }
        default: break;
        }
    }
    return 0;
}