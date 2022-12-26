#include<iostream>
using namespace std;
void arrange(int arr[],int n){
	int oddend;
	int firsteven;
	if(n%2==0){
		oddend=n/2-1;
		firsteven=n;
	}
	else{
		oddend=n/2;
		firsteven=n-1;
	}
	int val=1;
	for(int i=0;i<=oddend;i++){
		arr[i]=val;
		val=val+2;
	}
	int firstevenn=firsteven;
	for(int i=oddend+1;i<n;i++){
		arr[i]=firstevenn;
		firstevenn=firstevenn-2;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr=new int[n];
		arrange(arr,n);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		delete [] arr;
	}
}
