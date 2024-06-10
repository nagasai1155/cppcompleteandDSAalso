#include<iostream>
using namespace std;

   #include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    cout << "Sum of factorials of each digit in " << num << " is: " << sum << endl;
    return 0;
}

