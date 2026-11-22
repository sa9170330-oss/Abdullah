#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;

    // Get input from the user
    cout << "Enter first integer number: ";
    cin >> num1;

    cout << "Enter second integer number: ";
    cin >> num2;

    // The remainder operator is undefined when the divisor is zero.
    if (num2 == 0) {
        cout << "The second number must not be zero when calculating the remainder.\n";
        return 1;
    }

    // Calculate results
    int remainder = num1 % num2;
    double average = (num1 + num2) / 2.0;
    int square1 = num1 * num1;
    int square2 = num2 * num2;

    // Display results
    cout << "\n--- Results ---" << endl;
    cout << "Remainder of " << num1 << " and " << num2 << " is: " << remainder << endl;
    cout << "Average of both numbers is: " << average << endl;
    cout << "Square of the first number (" << num1 << ") is: " << square1 << endl;
    cout << "Square of the second number (" << num2 << ") is: " << square2 << endl;

    return 0;
}
