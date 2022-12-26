#include<iostream>
using namespace std;
void intersection(int *arr1,int *arr2,int n1,int n2){
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
				arr2[j]=-999999;
				break;
			}
		}
	}
}


int main(){
	int n1,n2;
	cin>>n1>>n2;
	int *arr1=new int[n1];
	int *arr2=new int [n2];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	intersection(arr1,arr2,n1,n2);
}
