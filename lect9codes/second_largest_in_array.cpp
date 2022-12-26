#include<iostream>
using namespace std;
//int secondLargest1(int *arr,int n){
//	int max=-99999;
//	for(int i=0;i<n;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		}
//	}
//	for(int i=0;i<n;i++){
//		if(arr[i]==max){
//			arr[i]=-99999;
//		}
//	}
//	max=-99999;
//	for(int i=0;i<n;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		}
//	}
//	return max;
//}
int secondLargest2(int *arr,int n){
	int l=-99999,s=-99999;
	for(int i=0;i<n;i++){
		if(arr[i]>l){
			s=l;
			l=arr[i];
		}
		else if(arr[i]>s&&arr[i]<l){
			s=arr[i];
		}
	}
	return s;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];	
	}
//	cout<<secondLargest1(arr,n)<<endl;
	cout<<secondLargest2(arr,n)<<endl;
}
