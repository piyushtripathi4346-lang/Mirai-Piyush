#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;   // take input as string

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '0')   // if digit is 0
            n[i] = '5';    // replace with 5
    }

    cout << n;
    return 0;
}
