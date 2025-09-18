#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1 ; row<=n ; row++){
        int i;
        for(int col=n-i+1; col>=n; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}