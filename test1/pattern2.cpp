#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
         int val=1;
        while(j<=n){
            if(j<=n-i+1){
                cout<<val;
            }
            else{
                cout<<"*";
            }
             val++;
            j++;
        }
        
        int k=1;
        while(k!=i){
            cout<<"*";
            k++;
        }
        j=i;
        val=n-i+1;
        while(j<=n){
            cout<<val;
            j++;
            val--;
        }
        
        
        cout<<endl;
        i++;
    }
  
}
