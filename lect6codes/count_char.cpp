//Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
//That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
//Print count of characters, count of digits and count of white spaces respectively (separated by space).

#include<iostream>
using namespace std;
int main(){
	char c;
	c=cin.get();
	int c1=0,c2=0,c3=0;
	while(c!='$'){
		if(c>='a'&&c<='z')
		c1++;
		else if(c>='0'&&c<='9')
		c2++;
		else if(c=='\t'||c=='\n'||c==' ')
		c3++;
		c=cin.get();
	}
	cout<<c1<<" "<<c2<<" "<<c3;
}
