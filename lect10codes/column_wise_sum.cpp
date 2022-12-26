#include<iostream>
using namespace std;
int main(){
	int arr[4][2];
	int m=4,n=2;
//	cout<<"enter m and n";
//	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
			int sum=0;
		for(int j=0;j<m;j++){
			sum=sum+arr[j][i];
		}
		cout<<sum<<" ";
	}
}


