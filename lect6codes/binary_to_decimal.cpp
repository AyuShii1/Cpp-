#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int n;
	cin>>n;
	long long int num=0;
	int pw=0;
	while(n!=0){
		int remainder=n%10;
		 num=num+remainder*pow(2,pw);
		pw++;
			n=n/10;
	}
	cout<<num;
}
