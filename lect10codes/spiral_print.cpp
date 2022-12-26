#include<iostream>
using namespace std;
void spiralprint(int **arr,int m,int n){
	int count =1;
	int rs=0,re=m-1,cs=0,ce=n-1;
	while(count<=m*n){
		for(int i=cs;i<=ce;i++){
			cout<<arr[rs][i]<<" ";
			count++;
		}
		rs++;
		for(int i=rs;i<=re;i++){
			cout<<arr[i][ce]<<" ";
			count++;
		}
		ce--;
		for(int i=ce;i>=cs;i--){
			cout<<arr[re][i]<<" ";
			count++;
		}
		re--;
		for(int i=re;i>=rs;i--){
			cout<<arr[i][cs]<<" ";
			count++;
		}
		cs++;
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	int **arr=new int *[m];
	for(int i=0;i<m;i++){
		arr[i]=new int[n];
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	spiralprint(arr,m,n);
	cout<<endl;
}
