#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1;
    int guess;
    cout << "Guess the number (between 1 and 10): ";
    cin >> guess;
    while (guess != secret) {
        if (guess < secret)
            cout << "Too low. Try again: ";
        else
            cout << "Too high. Try again: ";
        cin >> guess;
    }
    cout << "Correct! The number was " << secret << ".\n";
    
    string password, secretPassword = "Joski";
    cout << "\nEnter the secret password: ";
    cin >> password;
    while (password != secretPassword) {
        cout << "Incorrect. Try again: ";
        cin >> password;
    }
    cout << "Access Granted!\n";
    
    return 0;
}
