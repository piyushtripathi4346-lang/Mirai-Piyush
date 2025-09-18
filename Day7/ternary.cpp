#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int largest;
    // if(a>b){
    //     largest = a;
    // }
    // else{
    //     largest =b;
    // }
    largest=(a>b)?a:b; //ternary operator
    cout<<largest;
    return 0;
}