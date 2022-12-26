#include<iostream>
using namespace std;
//void rotate1(int *arr,int n,int d){
//	int i=1;
//	while(i<=d){
//		int temp=arr[0];
//		for(int j=0;j<n-1;j++){
//			arr[j]=arr[j+1];
//		}
//		arr[n-1]=temp;
//		i++;
//	}
//}
//but har baar wo n times shift kr rha h value ko
//islie zyada time lag rha h
//Time complexity boht zayda h

void rotate2(int *arr,int n,int d){
int temp[d];
for(int i=0;i<d;i++){
	temp[i]=arr[i];
}
for(int i=0;i<n-d;i++){
	arr[i]=arr[i+d];
}
for(int i=n-d,j=0;i<n;i++){
	arr[i]=temp[j];
	j++;
}	
}
//void rotate3(int *arr,int n,int d){
//int start=0;
//int end=n-1;
//while(start<end){
//	int temp=arr[start];
//	arr[start]=arr[end];
//	arr[end]=temp;
//	start++;
//	end--;
//}
//start=0;
//end=n-d-1;
//while(start<end){
//	int temp=arr[start];
//	arr[start]=arr[end];
//	arr[end]=temp;
//	start++;
//	end--;
//}
//start=n-d;
//end=n-1;
//while(start<end){
//	int temp=arr[start];
//	arr[start]=arr[end];
//	arr[end]=temp;
//	start++;
//	end--;
//}	
//}

int main(){
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int d;
	cout<<"enter d"<<endl;
	cin>>d;
	cout<<"3 ways to rotate"<<endl;
	
//	rotate1(arr,n,d);
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
	cout<<endl;
	rotate2(arr,n,d);
		for(int i=0;i<n;i++){
		cout<<arr[i];
	}
		cout<<endl;
//	rotate3(arr,n,d);
//		for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
	}

