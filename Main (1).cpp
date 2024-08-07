#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the input numbers
    double num1, num2, num3;

    // Prompt the user for input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Assume num1 is the largest initially
    double largest = num1;

    // Compare num2 with the current largest
    if (num2 > largest) {
        largest = num2;  // Update largest if num2 is greater
    }

    // Compare num3 with the current largest
    if (num3 > largest) {
        largest = num3;  // Update largest if num3 is greater
    }

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
