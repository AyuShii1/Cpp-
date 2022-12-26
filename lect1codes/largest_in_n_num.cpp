#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int currentnum;
	int max=-99999999;
	int i=1;
	while(i<=n){
		cin>>currentnum;
		if(currentnum>max){
			max=currentnum;
		}
		
		i++;
	}
	cout<<max;
}
