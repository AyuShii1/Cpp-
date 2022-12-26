#include<iostream>
using namespace std;
void replacecharacter(char str[],char c1,char c2){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==c1){
			str[i]=c2;
		}
	}
}
int main(){
	char str[1000];
	cin>>str;
	char c1,c2;
	cin>>c1>>c2;
	replacecharacter(str,c1,c2);
	cout<<str;
}
