#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int i=3;
	cout<<a<<endl<<b<<endl;
	while(i<=n){
		int c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
		i++;
	}
}
