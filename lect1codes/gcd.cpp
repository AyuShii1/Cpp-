//method 1
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cin>>a>>b;
//	int x,y;
//	int remainder;
//	if(a>b)
//	{
//		x=a;
//		y=b;
//	}
//	else{
//		x=b;
//		y=a;
//	}
//	while(remainder!=0){
//		remainder=x%y;
//		x=y;
//		y=remainder;
//	}
//	cout<<x%y;
//}

//method2
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int smaller;
	if(a<b)
	{
		smaller=a;
		if(b%a==0){
			cout<<a;
			return 0;
		}
	}
	else{
		smaller=b;
		if(a%b==0){
			cout<<b;
			return 0;
		}
	}
	int i=2,gcd=1;
	while(i<=smaller){
		if(a%i==0&&b%i==0){
			gcd=i;
		}
		i++;
	}
	cout<<gcd;
	
}
