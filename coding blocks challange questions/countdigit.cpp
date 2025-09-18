#include <iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cin>>n;
    if(n<0) n=-n;
    if(n==0) count=1;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}                                       