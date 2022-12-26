#include<iostream>
#include<string.h>
using namespace std;
void printsubstrings(char str[]){
	string s(str);
	int n=s.size();
	for(int i=0;i<n;i++){
		for(int len=1;len<=n-i;len++){
		cout<<s.substr(i,len)<<endl;	
		}
	}
}

//or

//void printsubstrings(char str[]){
//	int n=strlen(str);
//	
//}


using namespace std;
int main(){
	char str[1000];
	cin.getline(str,1000);
	printsubstrings(str);
}
