#include<iostream>
using namespace std;
void swapAlternate(int *arr,int n){
	if(n%2==0){
		for(int i=0;i<n;i=i+2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		}
	}
	else {
		for(int i=0;i<n-1;i=i+2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		swapAlternate(arr,n);
		for(int i=0;i<n;i++){
			cout<<arr[i]<" ";
		}
		 cout<<endl;
		 delete [] arr;
	}
}
