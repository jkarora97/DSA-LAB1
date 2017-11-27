#include<iostream>
#include<conio.h>
using namespace std;
void bubbleSort(int arr[]){
int n =5;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    }
    }
}
    int main(){

    int arr[]={5,3,9,1,0};
    bubbleSort(arr);
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
    }

