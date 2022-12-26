//this is not making a num with reveresed digits . this is just printing the reverse of a num
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	while(n!=0){
//		int a=n%10;
//		cout<<a;
//		n=n/10;
//	}
//}


//this is making a num with name rev with reversed digits 
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rev=0;
	while(n!=0){
		int remainder=n%10;
		rev=rev*10+remainder;
		n=n/10;
	}
	cout<<rev;
}
