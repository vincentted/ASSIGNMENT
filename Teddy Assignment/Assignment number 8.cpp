#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double purchaseAmount, discount, finalAmount;
    
    // Get the purchase amount from the user
    cout << "Enter the purchase amount: $";
    cin >> purchaseAmount;
    
    // Calculate discount based on purchase amount
    if (purchaseAmount >= 500) {
        discount = 0.20; // 20% discount
    } else if (purchaseAmount >= 200) {
        discount = 0.10; // 10% discount
    } else if (purchaseAmount >= 100) {
        discount = 0.05; // 5% discount
    } else {
        discount = 0.0;  // No discount
    }
    
    // Calculate the final amount after discount
    finalAmount = purchaseAmount * (1 - discount);
    
    // Display the discount and final amount
    cout << "Discount: " << discount * 100 << "%" << endl;
    cout << "Final amount after discount: $" << finalAmount << endl;
    
    return 0;
}
