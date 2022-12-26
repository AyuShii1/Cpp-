#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(pow(i,2)<=n){
		i++;
	}
	cout<<i-1;
}
