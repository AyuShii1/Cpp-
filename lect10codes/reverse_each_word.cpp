#include<iostream>
using namespace std;
void reverseeachword(char str[]){
	int start=0,end=0;
	for(int i=0;str[i]!='\0'+1;i++){
		if(str[i]==' '||str[i]=='\0'){
			end=i-1;
			while(start<end){
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
	char str[100];
	cin.getline(str,100);
	reverseeachword(str);
	cout<<str;
}
