#include<iostream>
using namespace std;
int main(){
	int n,c;
	cin>>n>>c;
	int sum=0,product=1;
	if(c==1){
		for(int i=1;i<=n;i++){
			sum=sum+i;
		}
		cout<<sum;
	}
	else if(c==2){
		for(int i=1;i<=n;i++){
			product=product*i;
		}
		cout<<product;
	}
	else
	cout<<-1;
}
