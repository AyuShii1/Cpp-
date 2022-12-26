#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int F[100];
	F[0]=0;
	F[1]=1;
	for(int i=2;i<25;i++){
		F[i]=F[i-1]+F[i-2];
		if(F[i]==F[n]){
			cout<<F[i];
			break;
		}
	}
	
}

//#include<iostream>
//using namespace std;
//int fib(int n)
//{
//    if(n==1)
//        return 1;
//    if(n==2)
//        return 1;
//    return fib(n-1)+fib(n-2);
//}
//int main(){
//  int n;
//    cin>>n;
//    cout<<fib(n);
//}
