#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = 1;
    for(int row=1 ; row<=n ; row++){
        for(int col=1 ; col<=row ; col++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}