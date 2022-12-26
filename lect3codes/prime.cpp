#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;
	bool divided=false;
	while(i<n){
		if(n%i==0){
			cout<<"not prime";
			divided=true;
			break;
		}
		i++;
	}
	if(!divided){
		cout<<"prime";
	}
}
