#include <iostream>
using namespace std;

int main() {
    int startNumber;

    cout << "Enter a number to start the countdown: ";
    cin >> startNumber;

    for (int i = startNumber; i >= 1; i--) {
        cout << i << endl;
    }

    cout << "Blast off!" << endl;

    return 0;
}
