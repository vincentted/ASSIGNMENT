#include <iostream>
#include <string>

using namespace std;
int main(){
double lateFee;
    int daysLate;
    string bookType;

    cout << "Enter the number of days late: ";
    cin >> daysLate;

    cout << "Enter the type of book (regular, children, reference): ";
    cin >> bookType;
  if (bookType == "regular") {
        lateFee = daysLate * 0.50;
        cout<<"The late fee is:"<<lateFee<<endl;
    } else if (bookType == "children") {
        lateFee = daysLate * 0.25;
         cout<<"The late fee is:"<<lateFee<<endl;
    } else if (bookType == "reference") {
        lateFee = 0.0;  // No late fee for reference books
         cout<<"The late fee is:"<<lateFee<<endl;
    } else {
        cout << "Invalid book type." << endl;
    }
 return 0;
}
