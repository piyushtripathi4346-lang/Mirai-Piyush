//1>Identify total rows
//2>Find relation between i th row & column.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1; row<=n ; row++){
        for(int col=1; col<=n; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
