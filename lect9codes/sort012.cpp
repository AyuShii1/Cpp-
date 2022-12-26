#include<iostream>
using namespace std;
//void sort012_1(int *arr,int n){
//	int count0=0;
//	int count1=0;
//	int count2=0;
//for(int i=0;i<n;i++){
//	if(arr[i]==0){
//		count0++;
//	}
//	else if(arr[i]==1){
//		count1++;
//	}
//	else{
//		count2++;
//	}
//}
//for(int i=0;i<count0;i++){
//	arr[i]=0;
//}
//for(int i=count0;i<count0+count1;i++){
//	arr[i]=1;
//}
////or
// //int j=0;
////     for(int i=count0;j<count1;i++,j++){
////         arr[i]=1;
////}
//for(int i=count0+count1;i<n;i++){
//	arr[i]=2;
//}	
//}

//void sort012_2(int *arr,int n){
//	if(n==0)
//    return;
//int start=0,end=n-1;
//int temp[n]={0};
//for(int i=0;i<n;i++){
//	if(arr[i]==0){
//		temp[start]=0;
//		start++;
//	}
//	else if(arr[i]==2){
//		temp[end]=2;
//		end--;
//	}
//}
//for(int i=start;i<=end;i++){
//	temp[i]=1;
//}
//for(int i=0;i<n;i++){
//	arr[i]=temp[i];
//}	
//}

void sort012_3(int *arr,int n){
int next0=0,next2=n-1;
for(int i=0;i<=next2;){
	if(arr[i]==0){
		int temp=arr[next0];
		arr[next0]=arr[i];
		arr[i]=temp;
		i++;
		next0++;
		//ham i++ isliye karte h kyu ki pehli baat toh aage se hamare pass 2 toh aayega nhi kyu ki usko toh already ham peeche bhj chuke hoge na aur agar 1 aata h toh that doesnt matter
		//20122 hai suppose next0=0,i=0,next2=4
		//20122 next0=0,i=0,next2=3
		//20122 next0=0,i=0,next2=2 
		//10222  next0=0,i=0,next2=1
		//10222   next0=0,i=1,next2=1
		//01222   next0=1,i=2,next2=3 
		// so basically we do i++ coz aage se 2 toh aayega nhi , obvio one he aayega .
		//agar i++ na bhi krenge then also it works fine , just that last condition check hogi but ayushi check this on other compiler ek baar yaad se .
	}
	else if(arr[i]==2){
		int temp=arr[next2];
		arr[next2]=arr[i];
		arr[i]=temp;
		next2--;	
		//ham i++ isliye nhi krte coz we dont know peeche se hamare paas 0 aa rha h ya 1 , agar 1 hua tab toh last else condition lag jayyegi otherwise 0 ke case mai first if condition
	}
	else
	i++;
}	
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"3 methods";
	cout<<endl;
//	sort012_1(arr,n);
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	cout<<endl;
//	sort012_2(arr,n);
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
	sort012_3(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
//	cout<<endl;
}
