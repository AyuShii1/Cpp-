//Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
//you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table

#include<iostream>
using namespace std;
int main(){
	int s,e,w;
	cin>>s>>e>>w;
	while(s<=e){
		int celsius=((s-32)*5)/9;
		cout<<s<<"\t"<<celsius<<endl;
		s=s+w;
	}
}
