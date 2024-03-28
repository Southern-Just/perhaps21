#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    int age;
    string drinkChoice;
    string season;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Check age for alcoholic drink
    if (age < 18) {
        cout << "Sorry, you are not old enough to purchase alcoholic drinks." << endl;
    } else {
        // Input season
        cout << "Enter the current season (Spring, Summer, Autumn, Winter): ";
        cin >> season;

        // Input drink choice
        cout << "Welcome! Please select a drink (Soda, Water, Beer): ";
        cin >> drinkChoice;

        // Output selected drink and recommendation based on season
        cout << "You have selected: ";
        if (drinkChoice == "Soda" || drinkChoice == "Water" || drinkChoice == "Beer") {
            cout << drinkChoice << endl;
            if (drinkChoice == "Beer") {
                cout << "Please drink responsibly!" << endl;
            }
            if (drinkChoice == "Soda") {
                if (season == "Summer") {
                    cout << "Soda is great for refreshing in the hot weather!" << endl;
                } else {
                    cout << "Soda is a good choice anytime!" << endl;
                }
            }
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
