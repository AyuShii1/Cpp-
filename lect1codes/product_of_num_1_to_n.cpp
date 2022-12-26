#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1,product=1;
	while(i<=n){
		product=product*i;
		i++;
	}
	cout<<product;
}
