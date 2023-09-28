#include "AllCars.h"

int main() {
    // Creating instances of different car classes
    Maserati myMaserati(2022);
    Tesla myTesla(2023);
    Mustang myMustang(2021);

    // Using base class member functions
    cout << "Maserati Information:\n";
    myMaserati.displaySpecialFeature();
    myMaserati.displayInfo();

    cout << "\nTesla Information:\n";
    myTesla.displaySpecialFeature();
    myTesla.displayInfo();

    cout << "\nMustang Information:\n";
    myMustang.displaySpecialFeature();
    myMustang.displayInfo();

    return 0;
}