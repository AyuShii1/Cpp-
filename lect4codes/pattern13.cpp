//method 1
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	char k='A';
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<k;
//			j++;
//		}
//		cout<<endl;
//		i++;
//		k++;
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
		char k='A'+i-1;
		while(j<=i){
			cout<<k;
			j++;
		}
		cout<<endl;
		i++;
	}
}
