#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
public:
    string VIN;
    string make;
    string model;
    int year;
    double mileage;
    vector<string> owners;

    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList)
      : VIN(vin), make(mk), model(mdl), year(yr), mileage(miles), owners(ownerList) {}

    void displayInfo() {
        cout << "VIN: "     << VIN     << endl;
        cout << "Make: "    << make    << endl;
        cout << "Model: "   << model   << endl;
        cout << "Year: "    << year    << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        cout << "Owners: ";
        for (const string& owner : owners) cout << owner << " ";
        cout << endl;
    }
};

int main() {
    vector<string> previousOwners = {
        "Allan Johnson",
        "Bob Lee",
        "Charlie Samson",
        "Dismas Evans"
    };

    Car myCar(
        "1HGCM82633A004352",
        "Honda",
        "Accord",
        2018,
        45230.7,
        previousOwners
    );

    myCar.displayInfo();
    return 0;
}