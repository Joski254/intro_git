#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string day;
    cout << "Enter a day of the week: ";
    cin >> day;
    
    day = toLowerCase(day);

    int dayNum;
    if (day == "monday") dayNum = 1;
    else if (day == "tuesday") dayNum = 2;
    else if (day == "wednesday") dayNum = 3;
    else if (day == "thursday") dayNum = 4;
    else if (day == "friday") dayNum = 5;
    else if (day == "saturday") dayNum = 6;
    else if (day == "sunday") dayNum = 7;
    else {
        cout << "Invalid day!" << endl;
        return 1;
    }

    switch (dayNum) {
        case 6:
        case 7:
            cout << "It's the weekend!" << endl;
            break;
        case 3:
            cout << "Hump Daaaaay." << endl;
            break;
        case 5:
            cout << "TGIF!" << endl;
            break;
        default:
            cout << "It's a weekday!" << endl;
    }

    return 0;
}
