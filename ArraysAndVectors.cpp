#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {5, 15, 25, 35, 45};
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    arr[0] = 10;
    arr[4] = 50;
    cout << "Modified Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
    
    vector<int> vec = {60, 120, 180};
    cout << "Original Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    
    vec.push_back(240);
    cout << "After push_back(240): ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    
    vec.pop_back();
    cout << "After pop_back(): ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    
    cout << "Vector size: " << vec.size() << "\n";
    
    vec.insert(vec.begin(), 30);
    cout << "After insert(30) at index 0: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    
    vec.erase(vec.begin() + 2);
    cout << "After erase() at index 2: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    
    vec.clear();
    cout << "After clear(), vector size: " << vec.size() << "\n";
    
    return 0;
}
