#include<iostream>
using namespace std;
int duplicate1(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j&&arr[i]==arr[j]){
				return arr[i];
			}
		}
	}
	return -1;
}
int duplicate2(int *arr,int n){
	for(int i=0;i<n-1;i++){
		for(int j=1+i;j<n;j++){
			if(arr[i]==arr[j]){
				return arr[i];
			}
		}
	}
	return -1;
}


int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"2 ways to print duplicate"<<endl;
	cout<<duplicate1(arr,n)<<endl;
	cout<<duplicate2(arr,n);
}
