#include<iostream>
#include<conio.h>
using namespace std;
void selectionSort(int arr[]){
int n =5;int temp,min;
for(int i=0;i<n-1;i++){
    min=i;
    for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min]){
     min=j;
    }
    }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;

    }
}
    int main(){

    int arr[]={4,5,1,0,2};
    selectionSort(arr);
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
    }
