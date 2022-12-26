#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int n1=n/2+1;
	int i=1;
	while(i<=n1){
		int j=1;
		while(j<=n1-i){
			cout<<" ";
			j++;
		}
		int k=1;
		while(k<=2*i-1){
			cout<<"*";
			k++;
		}
		cout<<endl;
		i++;
	}
	int n2=n-n1;
     i=n2;
    while(i>=1){
        int j=1;
        while(j<=n2-i+1){
            cout<<" ";
            j++;
        }
     int k=1;
        while(k<=2*i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i--;
    }   
}
