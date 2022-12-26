//method1
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//
//	while(i<=n){
//		int j=1;
//			int a=n;
//		while(j<=n){
//			cout<<a;
//			a--;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}

//method2
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}
}
