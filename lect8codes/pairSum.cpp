#include<iostream>
using namespace std;
int pairsum(int *arr,int n,int x){
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==x)
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<pairsum(arr,n,x);
}
