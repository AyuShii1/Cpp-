#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool isdivide =false ;
	for(int i=2;i<n;i++){
		if(n%i==0){
			isdivide =true;
			break;
		}
	}
	if(isdivide){
		cout<<"not prime";
	}
	else{
		cout<<"prime";
	}
}
