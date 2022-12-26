#include<iostream>
using namespace std;
void findlargest(int **arr,int m,int n){
	//row
	int maxrow=-999;
	int maxrowindex=0;
	for(int i=0;i<m;i++){
		int rowsum=0;
		for(int j=0;j<n;j++){
			rowsum=rowsum+arr[i][j];
		}
		if(rowsum>maxrow){
			maxrow=rowsum;
			maxrowindex=i;
		}
	}
	//column
	int maxcolumn=-999;
	int maxcolumnindex=0;
	for(int i=0;i<n;i++){
		int columnsum=0;
		for(int j=0;j<m;j++){
			columnsum=columnsum+arr[j][i];
		}
		if(columnsum>maxcolumn){
			maxcolumn=columnsum;
			maxcolumnindex=i;
		}
	}
	if(maxrow>maxcolumn){
		cout<<"row sum is largest"<<" ="<<maxrow<<" and row is "<<maxrowindex;
	}
	else{
		cout<<" column sum is largest "<<"= "<<maxcolumn<<" and column is "<<maxcolumnindex;
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	int **arr= new int *[m];
	for(int i=0;i<m;i++){
		arr[i]= new int[n];
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	findlargest(arr,m,n);
	cout<<endl;
}
