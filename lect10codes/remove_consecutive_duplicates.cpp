#include<iostream>
using namespace std;
//void removeconsecutiveduplicates(char str[]){
//	int j=0;
//	for(int i=0;str[i]!='\0'-1;i++){
//		if(str[i]==str[i+1]){
//			continue;
//		}
//		str[j]=str[i];
//		j++;
//	}
//}
//or

void removeconsecutiveduplicates(char str[]){
	int j=0;
	for(int i=1;str[i]!='\0'-1;i++){
		if(str[j]!=str[i]){
			j++;
			str[j]=str[i];
		}
	}
	j++;
	str[j]='\0';
}
int main(){
	char str[1000];
	cin.getline(str,1000);
	removeconsecutiveduplicates(str);
	cout<<str;
}
