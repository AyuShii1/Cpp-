#include<iostream>
using namespace std;
void removealloccurrencesofchar(char str[],char a){
	int j=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=a){
         str[j]=str[i];
		 j++;			
		}
	}
	str[j]='\0';
}
int main(){
	char str[1000];
	cin.getline(str,1000);
	char a;
	cin>>a;
	removealloccurrencesofchar(str,a);
	cout<<str;
}
