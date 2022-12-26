#include<iostream>
using namespace std;
//void trimSpaces(char str[]){
//	int j=0;
//	for(int i=0;str[i]!='\0';i++){
//		if(str[i]!=' '){
//			str[j]=str[i];
//			j++;
//		}
//	}
//	str[j]='\0';
//}

//or

void trimSpaces(char str[]){
    int i=0;
    int j=0;
    while(str[i]!='\0'){
    if(str[i]!=' ')
	{
		char a=str[i];
		str[i]=str[j];
		str[j]=a;
		j++;
		i++;
		}
		else{
			i++;
		}	
	}
	str[j]='\0';
}

int main(){
	char str[1000];
	cin.getline(str,1000);
	trimSpaces(str);
	cout<<str;
	
}
