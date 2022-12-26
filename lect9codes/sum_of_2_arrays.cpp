#include<iostream>
using namespace std;
void sumOf2arr(int *arr1,int n1,int *arr2,int n2,int*arr3,int n3){
	int i=n1-1;
	int j=n2-1;
	int k=n3-1;
		int carry=0;
	while(i>=0&&j>=0&&k>=0){
		int n=arr1[i]+arr2[j]+carry;
		arr3[k]=n%10;
		carry=n/10;
		i--;
		j--;
		k--;
	}
	if(i==-1){
		while(j>=0){
//			arr3[k]=arr2[j]+carry;
//			k--;
//			j--;
  int n=arr2[j]+carry;
        arr3[k]=n%10;
        carry=n/10;
        k--;
        j--;    
		}
	}
	if(j==-1){
		while(i>=0){
//		arr3[k]=arr1[i]+carry;
//		k--;
//		i--;
 int n=arr1[i]+carry;;
        arr3[k]=n%10;
        carry=n/10;
        k--;
        i--;
		}
	}
	if(k==0){
		arr3[0]=carry;
	}
}
int main(){
	int n1;
	cin>>n1;
	int *arr1=new int[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int n2;
	cin>>n2;
	int *arr2=new int[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	int n3=max(n1,n2)+1;
	int *arr3=new int[n3];
	sumOf2arr(arr1,n1,arr2,n2,arr3,n3);
	for(int i=0;i<n3;i++){
		cout<<arr3[i]<<" ";
	}
	
	delete[] arr1;
		delete[] arr2;
		delete[] arr3;
		cout << endl;
}
