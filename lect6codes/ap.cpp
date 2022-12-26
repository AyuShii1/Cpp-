//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
//method 1
//#include<iostream>
//using namespace std;
//int main(){
//	int x;
//	cin>>x;
//	int count=1;
//	int i=1;
//	while(count<=x){
//		int a=3*i+2;
//		if(a%4!=0){
//			cout<<a<<endl;
//				count++;
//		}
//		i++;
//	}
//	
//}


//method 2
#include<iostream>
using namespace std;
int main() {
    int X;
    int a;
    cin>>X;
   int count=1;
  //  while(count<=X){
        for(int N=1;count<=X ; N++){
            a=3*N+2;
            if(a%4!=0){
                 cout<<a<<" ";
                count++;
            }        
    }
  //  }	
}
