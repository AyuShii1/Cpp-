#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>=c||b+c>=a||c+a>=b)
	cout<<"valid triangle";
	else
	cout<<"not valid";
}
