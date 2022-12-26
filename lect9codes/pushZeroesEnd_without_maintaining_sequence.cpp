#include<iostream>
using namespace std;
void pushZeroesEnd(int *arr,int n){
	int start=0;
	int end=n-1;
	while(start<end){
		if(arr[start]!=0){
			start++;
		}
		else if(arr[end]==0){
			end--;
		}
		else if(arr[start]==0&&arr[end]!=0){
			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			start++;
			end--;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	pushZeroesEnd(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
