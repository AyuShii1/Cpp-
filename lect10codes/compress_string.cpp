#include<iostream>
#include<string.h>
using namespace std;
void compressstring(char str[]){
	int n=strlen(str);
	int j=0;
	int count=0;
	for(int i=0;i<n;i++){
		if(str[i]==str[i+1]&&i<n-1){
			count++;
		}
		else if(count==0){
			str[j++]=str[i];
		}
		else{
			str[j++]=str[i];
			str[j++]=count+49;
			count=0;
		}
	}
	str[j]='\0';
}
int main(){
	char str[1000];
	cin.getline(str,1000);
	compressstring(str);
	cout<<str;
}
