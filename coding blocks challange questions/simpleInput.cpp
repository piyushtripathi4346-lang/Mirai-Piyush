#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;

    while (cin >> n) {       // take input one by one
        sum = sum + n;       // add n to sum
        if (sum < 0) {       // check if sum goes negative
            break;           // stop
        }
        cout << n << endl;   // print the number
    }

    return 0;
}
