////method 1
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//
//	while(i<=n){
//		int j=1;
//			char k='A'+i-1;
//		while(j<=i){
//			cout<<k;
//			k++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}

//method 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=i){
            char ch1=ch+j-1;
            cout<<ch1;
                j++;
        }
        cout<<endl;
        i++;
    }
}


