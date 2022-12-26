#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int div=2;
	while(div<=n-1){
		if(n%div==0){
			cout<<"not prime";
			return 0;
		}
		div++;
	}
	cout<<"prime";
}
