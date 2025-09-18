#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int D = b*b - 4*a*c;
	if (D>0){
		cout<<"Real and Distinct"<<endl;
		double root1 = (-b + sqrt(D)) / (2*a);
		double root2 = (-b - sqrt(D)) / (2*a);
		int r1 = int (root1);
		int r2 = int (root2);
		if (r1>r2)
			cout<<r2<<' '<<r1<<endl;
		else
		    cout<<r1<<' '<<r2<<endl; 
	}
	else if (D == 0){
		cout<<"Real and Equal"<<endl;
		double root = (-b) / (2*a);
		int r = int (root);
		cout<<r<<' '<<r<<endl;
	}
	else {
		cout<<"Imaginary"<<endl;
	}
	return 0;
}