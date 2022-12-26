#include <iostream>
using namespace std;
int main(){
   int n, largest, second;
   cin>>n;
    int arr[n];
    if(n==0||n==1){
        cout<< -2147483648;
    }
    else{  for(int i=0; i<n; i++){
      cin>>arr[i];
   }
 
   if(arr[0]<arr[1]){ 
      largest = arr[1];
      second = arr[0];
   }
   else{ 
      largest = arr[0];
      second = arr[1];
   }
   for (int i = 2; i< n ; i ++) {

      if (arr[i] > largest) {
         second = largest;
         largest = arr[i];
      }
      else if (arr[i] > second && arr[i] != largest) {
         second = arr[i];
      }
   }
   cout<<second;}
 
   return 0;
}



