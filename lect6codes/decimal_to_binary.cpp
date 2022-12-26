#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int remainder;
	int ans=0;
	int pw=1;
	while(n!=0){
		 remainder=n%2;
		 ans=ans+remainder*pw;
		 pw=pw*10;
		n=n/2;
	}
	cout<<ans;
}

//But, keep that in mind, that pow function return double and for larger
//powers may give unexpected results...
//do, you know that pow returns a value of type double, so for larger 
//values of 10^ something it might give 99999 or 100001 something    


//below written  code is wrong .......
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int remainder;
//	int ans=0;
//	int pw=1;
//	while(n!=0){
//		 remainder=n%2;
//		 ans=ans*10+remainder;
//		n=n/2;
//	}
//	cout<<ans;
//}
