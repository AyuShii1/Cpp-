#include<iostream>
using namespace std;
void merge1(int *arr1,int *arr2,int *ans,int n1,int n2){
	int i,j,k=0;
	for( i=0,j=0;i<n1&&j<n2; ){
		if(arr1[i]<arr2[j]){
			ans[k]=arr1[i];
			i++;
			k++;
		}
		else{
			ans[k]=arr2[j];
			k++;
			j++;
		}
	}
	while(i<n1){
		ans[k]=arr1[i];
		k++;
		i++;
	    }
	    while(j<n2){
	    	ans[k]=arr2[j];
	    	j++;
	    	k++;
		}
}
void merge2(int *arr1,int*arr2,int *ans,int n1,int n2){
	int i=0,j=0,k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			ans[k]=arr1[i];
			i++;
			k++;
		}
		else{
			ans[k]=arr2[j];
			k++;
			j++;
		}	
	}
	if(i==n1){
	 while(j<n2){
	    	ans[k]=arr2[j];
	    	j++;
	    	k++;
		}	
	}
	else{
		while(i<n1){
		ans[k]=arr1[i];
		k++;
		i++;
	    }	
	}
}
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int *arr1=new int [n1];
	int *arr2=new int [n2];
	int *ans=new int [n1+n2];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	cout<<"2 ways to merge"<<endl;
	merge1(arr1,arr2,ans,n1,n2);
	for(int i=0;i<n1+n2;i++){
		cout<<ans[i];
	}
	cout<<endl;
	merge2(arr1,arr2,ans,n1,n2);
	for(int i=0;i<n1+n2;i++){
		cout<<ans[i];
	}
}
