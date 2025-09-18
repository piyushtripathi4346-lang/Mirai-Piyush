#include <iostream>
using namespace std;

int main() {
    int age, bmi, chronic_conditions;
    cin >> age >> bmi >> chronic_conditions;

    if (age >= 60) {
        if (bmi >= 30) {
            if (chronic_conditions >= 2) {
                cout << "High Risk" << endl;
            } else {
                cout << "Moderate Risk" << endl;
            }
        } else {
            if (chronic_conditions >= 1) {
                cout << "Moderate Risk" << endl;
            } else {
                cout << "Low Risk" << endl;
            }
        }
    } 
    else if (age >= 40) { // 40 ≤ age < 60
        if (bmi >= 25) {
            if (chronic_conditions >= 2) {
                cout << "Moderate Risk" << endl;
            } else {
                cout << "Low Risk" << endl;
            }
        } else {
            cout << "Low Risk" << endl;
        }
    } 
    else { // age < 40
        if (bmi >= 28) {
            if (chronic_conditions >= 1) {
                cout << "Moderate Risk" << endl;
            } else {
                cout << "Low Risk" << endl;
            }
        } else {
            cout << "Very Low Risk" << endl;
        }
    }

    return 0;
}
