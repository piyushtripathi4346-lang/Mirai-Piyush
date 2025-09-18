#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int oddSum = 0, evenSum = 0, pos = 1;

    while (n > 0) {
        int digit = n % 10;   // get last digit

        if (pos % 2 == 1) {
            oddSum += digit;  // odd position
        } else {
            evenSum += digit; // even position
        }

        n = n / 10; // remove last digit
        pos++;      // move to next position
    }

    cout << "Odd placed sum = " << oddSum << endl;
    cout << "Even placed sum = " << evenSum << endl;

    return 0;
}