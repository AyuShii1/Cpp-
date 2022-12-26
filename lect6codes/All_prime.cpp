#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int n1=2;n1<=n;n1++){
         bool divide =true;
        for(int i=2;i<n1;i++){
            if(n1%i==0){
                  divide=false;
                break; 
            }
            }
         if(divide){
                 cout<<n1<<endl;
        }   
    }
}


