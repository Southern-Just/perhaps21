#include <iostream>
#include <string>
using namespace std;

struct Car {
    string make;
    string model;
    int year;
    float mileage;
};

int main() {
    // Declare variables
    int integerNumber;
    float floatNumber;
    char character;
    string text;

    // Input
    cout << "Enter an integer number: ";
    cin >> integerNumber;
    
    cout << "Enter a floating-point number: ";
    cin >> floatNumber;
    
    cout << "Enter a character: ";
    cin >> character;
    
    cout << "Enter a text: ";
    cin.ignore(); // Ignore previous newline character
    getline(cin, text);

    // Output
    cout << "\n\nOutput:" << endl;
    cout << "Integer Number: " << integerNumber << endl;
    cout << "Float Number: " << floatNumber << endl;
    cout << "Character: " << character << endl;
    cout << "Text: " << text << endl;

    // Car details
    Car myCar;
    cout << "\nEnter car details:" << endl;
    cout << "Make: ";
    getline(cin, myCar.make);
    cout << "Model: ";
    getline(cin, myCar.model);
    cout << "Year: ";
    cin >> myCar.year;
    cout << "Mileage: ";
    cin >> myCar.mileage;

    // Output car details
    cout << "\nCar Details:" << endl;
    cout << "Make: " << myCar.make << endl;
    cout << "Model: " << myCar.model << endl;
    cout << "Year: " << myCar.year << endl;
    cout << "Mileage: " << myCar.mileage << endl;

    return 0;
}
