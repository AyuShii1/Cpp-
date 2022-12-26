#include<iostream>
#include<string.h>
using namespace std;
//bool checkpalindrome(char str[]){
//	int count=0;
//	for(int i=0;str[i]!='\0';i++){
//		count ++;
//	}
//	int i=0;
//	int j=count-1;
//	while(i<=j){
//		if(str[i]!=str[j]){
//			return false;
//		}
//		i++;
//		j--;
//	}
//	return true;
//}

//or

bool checkpalindrome(char str[]){
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	char temp[count];
	for(int i=0;i<count;i++){
		temp[i]=str[i];
	}
	temp[count]='\0';
	int i=0;
	int j=count-1;
	while(i<=j){
		char a=str[i];
		str[i]=str[j];
		str[j]=a;
		i++;
		j--;
	}
	if(strcmp(str,temp)==0){
		return true;
	}
	else
	return false;
}
int main(){
	char str[1000];
	cin.getline(str,1000);
	if(checkpalindrome(str)){
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}
