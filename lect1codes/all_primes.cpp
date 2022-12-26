#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int n=1;
//	cout<<"non prime no. are"<<endl;
    cout<<"prime no. are"<<endl;
	while(n<=N){
		int div=2;
		while(div<=n-1){
		if(n%div==0){
//			cout<<n<<endl;
			break;			
		}
		div++;	
		}
		if(div==n){
			cout<<n<<endl;
		}
		n++;
	}
}
