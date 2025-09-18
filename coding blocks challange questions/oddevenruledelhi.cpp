#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // number of cars

    for (int i = 0; i < N; i++) {
        int car;
        cin >> car;

        int sumEven = 0, sumOdd = 0;

        // directly use car
        while (car > 0) {
            int d = car % 10;   // last digit
            if (d % 2 == 0)
                sumEven = sumEven + d;
            else
                sumOdd = sumOdd + d;
            car = car / 10;     // remove last digit (car reduces)
        }

        // check rule
        if (sumEven % 4 == 0 || sumOdd % 3 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
