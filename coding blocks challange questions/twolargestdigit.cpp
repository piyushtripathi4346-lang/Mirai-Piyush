#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=0;
    int ld1=0;
    int ld2=0;
    while(n!=0){
        d=n%10;
        if(d>ld1){
            ld2 = ld1;
            ld1=d;
        }
        else if(ld2<=ld1 && ld1<=d){
            ld2=ld1;
            ld1=d;
        }
        else if (d>ld2 && d!=ld1){
            ld2=d;
        }
        n=n/10;
    }
    cout<<ld1<<ld2<<endl;
    return 0;
}