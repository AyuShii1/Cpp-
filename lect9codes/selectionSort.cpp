//ham iss mai sabse chotte element ko pehle laate hai 
#include<iostream>
using namespace std;
void selectionSort(int *arr,int n){
	for(int i=0;i<n-1;i++){
		int min=arr[i],minindex=i;
		for(int j=i+1;j<n;j++){
		if(arr[j]<min){
			min=arr[j];
			minindex=j;
		}	
		}
		//in swapping , we cannot take min becoz we want to make changes in the index of the array .
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

  
