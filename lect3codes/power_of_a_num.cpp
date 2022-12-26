#include<iostream>
using namespace std;
int main(){
	int x,n;
	cin>>x>>n;
	int power=1;
	int i=1;
	while(i<=n){
		power=power*x;
		i++;
	}
	cout<<power;
}
