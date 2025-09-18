#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int max_num = (N1 > N2) ? N1 : N2;  // Start from the bigger number
    int lcm = max_num;

    // Keep checking until we find a number divisible by both
    while(true) {
        if(lcm % N1 == 0 && lcm % N2 == 0) {
            break;  // Found LCM
        }
        lcm++;  // Check next number
    }

    cout << lcm;
    return 0;
}
