#include<iostream>
using namespace std;

void reversewordwise(char str[]){
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	int i=0;
	int j=count-1;
	while(i<=j){
		char a=str[i];
		str[i]=str[j];
		str[j]=a;
		i++;
		j--;
	}

	int start=0;
	int end=0;
	for(int i=0;i<=count;i++){
	if(str[i]==' '||str[i]=='\0'){
		end=i-1;
		while(start<=end){
			char a=str[start];
		str[start]=str[end];
		str[end]=a;	
		start++;
		end--;	
		}
	   start=i+1;
	}
 }
}
int main(){
	char str[1000];
	cin.getline(str,1000);
	reversewordwise(str);
	cout<<str;
}
