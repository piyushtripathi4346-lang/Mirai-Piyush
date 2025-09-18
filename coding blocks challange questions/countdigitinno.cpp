#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int count = 0;

    // Special case if n=0 and d=0
    if (n == 0 && d == 0) {
        count = 1;
    }

    while (n > 0) {
        int lastDigit = n % 10;   // extract last digit
        if (lastDigit == d) {
            count++;              // increase count if match
        }
        n = n / 10;               // remove last digit
    }

    cout << count << endl;
    return 0;
}
