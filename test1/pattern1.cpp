#include<iostream>
using namespace std;

int main(){

  // Write your code here  
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int val=i;
        int k=1;
        while(k<=i){
            cout<<val;
            k++;
            val--;
        }
    k=i-1;
        int val1=2;
        while(k>=1){
            cout<<val1;
            val1++;
           k--; 
        }
        cout<<endl;
        i++;
    }
}

