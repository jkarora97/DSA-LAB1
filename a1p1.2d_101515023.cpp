#include<iostream>
using namespace std;
int linearsearch(int arr[],int x){
int n=5;
for(int i=0;i<n;i++){
if(arr[i]==x)
return i;
}
return -1;

}
int main(){
int arr[]={1,2,5,8,4};
int x;
cout<<"enter element to be found";
cin>>x;
int ind=linearsearch(arr,x);
cout<<"location "<<ind;
}
