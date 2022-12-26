#include<iostream>
using namespace std;
//take a temp array and fill it with non zeros first
void pushZeroesEnd1(int *arr,int n){
	int j=0;
	int temp[n];
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			temp[j]=arr[i];
			j++;
		}
	}
	while(j<n){
		temp[j]=0;
		j++;
	}
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
	}
}
// suppose 0 2 1 array hai hamara
// initially i = 0 and k = 0
// ok?
// ab 0th position par zero hai na?
// to swapping nhi hogi aur i ki value badh jayegi
// now i = 1 and k = 0
// ab dekho i par non zero aya?
// aba swapping hogi
// now array will be 2 0 1
// AND i = 2 and k = 1
// ab i = 2 par bhi non zero hai
// again swapping
// now array will be 2 1 0
// i = 4 and k = 3
// loop stop

//suppose 208
//i=0,k=0... as i=0 is a non zero , swap it with k
//tab bhi 208 he banta but now i=1,k=1
//i=1 pe zero hai toh move i , now i=2,k=1
//i is non zero ,swap it with k 
//280 ban jata hai 
//now i=3 k=2 ab iske aage loop nhi chalegi . 
void pushZeroesEnd2(int *arr,int n){
	int i=0,k=0;
	for(;i<n;i++){
		if(arr[i]!=0){
			int temp=arr[i];
			arr[i]=arr[k];
			arr[k]=temp;
			k++;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"2 ways to push zeroes at end"<<endl;
	pushZeroesEnd1(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
	pushZeroesEnd2(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
