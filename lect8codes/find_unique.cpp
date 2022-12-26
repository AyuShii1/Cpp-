#include<iostream>
using namespace std;
int findUnique(int *arr, int n){
	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<n;j++){
			if(i!=j&&arr[i]==arr[j]){
				break;
			}
		}
		if(j==n){
			return arr[i];
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
	cout<<findUnique(arr,n);
	return 0;
}
