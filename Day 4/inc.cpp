#include <iostream>
using namespace std;

int main()
{
    int a=7;
    int b=8;
    cout<<(a++ + a++ + ++b + ++a)<< endl;
    return 0;
}