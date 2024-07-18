#include <iostream>
using namespace std;

int main() {
    int age;
    char movieType;
    double ticketPrice;

    // Input customer age
    cout << "Enter your age: ";
    cin >> age;

    // Input movie type
    cout << "Enter movie type (r for regular, 3 for 3D): ";
    cin >> movieType;

    // Determine the ticket price based on age and movie type
    if (age < 0) {
        cout << "Invalid age." << endl;
        return 1;
    } else if (age < 12) {
        if (movieType == 'r') {
            ticketPrice = 5.0;  // Regular movie price for children
        } else if (movieType == '3') {
            ticketPrice = 7.0;  // 3D movie price for children
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else if (age <= 65) {
        if (movieType == 'r') {
            ticketPrice = 10.0;  // Regular movie price for adults
        } else if (movieType == '3') {
            ticketPrice = 13.0;  // 3D movie price for adults
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else {
        if (movieType == 'r') {
            ticketPrice = 8.0;  // Regular movie price for seniors
        } else if (movieType == '3') {
            ticketPrice = 10.0;  // 3D movie price for seniors
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    }

    // Output the ticket price
    cout << "The ticket price is $" << ticketPrice << endl;

    return 0;
}
