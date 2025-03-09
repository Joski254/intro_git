#include <iostream>
using namespace std;

int main() {
    int startNumber;

    // Prompt the user for input
    cout << "Enter a number to start the countdown: ";
    cin >> startNumber;

    // For loop to count down from the user-specified number to 1
    for (int i = startNumber; i >= 1; i--) {
        cout << i << endl;
    }

    // Print the final message
    cout << "Blast off!" << endl;

    return 0;
}