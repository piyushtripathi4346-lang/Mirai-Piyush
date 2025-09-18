#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int repeat;
    cin>>repeat;
    int count = 0;
    while(n > 0){
        int digit = n%10;
        if(n%10 == repeat){
            count++;
        } 
        n = n/10;
    }

    cout<<count<<endl;
    return 0;
}