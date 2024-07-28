#include <iostream>

using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial of a negative number doesn't exist." << endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    unsigned long long fact = factorial(number);

    if (fact != 0) { // To avoid printing for negative inputs
        cout << "Factorial of " << number << " is " << fact << endl;
    }

    return 0;
}
