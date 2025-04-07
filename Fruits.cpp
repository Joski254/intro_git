#include <iostream>
#include <string>

using namespace std;

int main() {

    string fruits[5] = {"Apple", "Banana", "Cherry", "Grape", "Orange"};

    cout << "Here are the fruits in the list:\n";
    for (const string &fruit : fruits) {
        cout << fruit << "\n";
    }
    
    cout << "\nBonus: Add two more fruits!\n";
    string newFruit1, newFruit2;
    cout << "Enter a new fruit: ";
    getline(cin, newFruit1);
    cout << "Enter another fruit: ";
    getline(cin, newFruit2);

    string updatedFruits[7];

    for (int i = 0; i < 5; i++) {
        updatedFruits[i] = fruits[i];
    }

    updatedFruits[5] = newFruit1;
    updatedFruits[6] = newFruit2;

    cout << "\nUpdated list of fruits:\n";
    for (const string &fruit : updatedFruits) {
        cout << fruit << "\n";
    }

    return 0;
}
