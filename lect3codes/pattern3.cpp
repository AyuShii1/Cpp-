#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int val=1;
	while(i<=n){
		int j=1;
		while(j<=n-i){
			cout<<" ";
			j++;
		}
		int k=1;
		while(k<=i){
			cout<<val;
			val++;
			k++;
		}
		cout<<endl;
		i++;
	}
}


