//you have to take an integer as input and count total no. of digits.
#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}