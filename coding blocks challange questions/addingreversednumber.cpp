#include<iostream>
using namespace std;
//Funtion to reverse a number
long long reverseNum(long long n){
	long long rev=0;
	while(n>0){
		rev=(rev*10)+(n%10);
		n/=10;
	}
	return rev;
}
int main () {
	int t;
	cin>>t; //number of test cases
	while (t--){    //t-- while(t>0){ t=t-1; }
		long long a,b;
		cin>>a>>b;
		//reverse both number
		a=reverseNum(a);
		b=reverseNum(b);
		//add them
		long long sum=a+b;
		//reverse the sum and print
		cout<<reverseNum(sum)<<endl;
	}
	return 0;
}