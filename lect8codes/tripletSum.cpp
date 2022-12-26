#include<iostream>
using namespace std;
int tripletsum(int *arr,int n,int x){
	int count=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(arr[i]+arr[j]+arr[k]==x){
					count++;
				}
			}
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
    cout<<tripletsum(arr,n,x);
}
