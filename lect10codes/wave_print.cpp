#include<iostream>
using namespace std;
void waveprint(int **arr,int m,int n){
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<m;j++)
			cout<<arr[j][i]<<" ";
		}
		else{
			for(int j=m-1;j>=0;j--)
			cout<<arr[j][i]<<" ";
		}
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	int **arr=new int *[m];
	for(int i=0;i<m;i++){
		arr[i]=new int [n];
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	waveprint(arr,m,n);
	cout<<endl;
}
