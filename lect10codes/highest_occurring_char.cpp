#include<iostream>
#include<string.h>
using namespace std;
char highestOccurringChar(char str[]){
if(strlen(str)==2){
	return str[0];
}
else{
		int arr[256]={0};
	for(int i=0;str[i]!='\0';i++){
		arr[str[i]]++;
	}
	char maxindex=0;
	int max=-999;
	for(int i=0;str[i]!='\0';i++){
		if(max<arr[str[i]]){
			max=arr[str[i]];
			maxindex=str[i];
		}
	}
	return maxindex;
}
}
int main(){
	char str[1000];
	cin.getline(str,1000);
	cout<<highestOccurringChar(str);
}
