#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
for (int no = 2; no <= n; ++no) {
    int i;
        for (i = 2; i < no; i++) {
            if (no % i == 0) {
                break; // not prime, stop checking
            }
        }
        if (i == no) { // loop finished without finding a divisor
            cout << i << " "<<endl;
        }
    }
    cout<<endl;
    return 0;
}
