#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int choice = 0;

    // Encode the comparison result into choice
    if (num1 > num2) {
        choice = 1;
    } else if (num1 < num2) {
        choice = 2;
    } else {
        choice = 3;
    }

    // Use switch-case to determine the result
    switch (choice) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case 2:
            cout << "The maximum number is: " << num2 << endl;
            break;
        case 3:
            cout << "Both numbers are equal: " << num1 << endl;
            break;
        default:
            cout << "Error in determining the maximum number." << endl;
            break;
    }

    return 0;
}
