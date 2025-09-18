#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pos = 1;      // position tracker
    int inverse = 0;  // final inverse number

    while (n > 0) {
        int digit = n % 10;   // extract last digit
        // place "pos" at the "digit" position
        inverse += pos * pow(10, digit - 1);
        n /= 10;
        pos++;
    }

    cout << inverse << endl;
    return 0;
}
