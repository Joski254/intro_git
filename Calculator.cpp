#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int modulo(int a, int b) { return a % b; }

int main() {
    int choice = 0, num1, num2, result;
    while (choice != 6) {
        cout << "\n===== Calculator Menu =====\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n6. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        if (choice == 6) {
            cout << "Exiting program...\n";
            break;
        }
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << "\n";
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << "\n";
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << "\n";
                break;
            case 4:
                if (num2 == 0)
                    cout << "Error: Division by zero is not allowed.\n";
                else {
                    result = divide(num1, num2);
                    cout << "Result: " << result << "\n";
                }
                break;
            case 5:
                if (num2 == 0)
                    cout << "Error: Division by zero is not allowed.\n";
                else {
                    result = modulo(num1, num2);
                    cout << "Result: " << result << "\n";
                }
                break;
            default:
                cout << "Invalid option. Please choose again.\n";
        }
    }
    return 0;
}
