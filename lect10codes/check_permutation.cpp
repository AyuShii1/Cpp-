#include<iostream>
using namespace std;
bool ispermutation(char arr1[],char arr2[]){
	int arr[256]={0};
	for(int i=0;arr1[i]!='\0';i++){
		arr[arr1[i]]++;
	}
	for(int i=0;arr2[i]!='\0';i++){
		arr[arr2[i]]--;
	}
	for(int i=0;i<256;i++){
		if(arr[i]!=0){
			return false;
		}
	}
	return true;
}
int main(){
	char arr1[1000],arr2[1000];
	cin.getline(arr1,1000);
	cin.getline(arr2,1000);
	if(ispermutation(arr1,arr2)==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
