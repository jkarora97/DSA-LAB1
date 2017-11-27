#include<iostream>
using namespace std;
void insertionSort(int arr[]){
int n=5;
for(int j=1;j<n;j++){
int key=arr[j];
int i=j-1;
while(i>=0&&arr[i]>key){
arr[i+1]=arr[i];
i=i-1;
}
arr[i+1]=key;
}
}
  int main(){

    int arr[]={5,3,9,1,0};
    insertionSort((arr));
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
    }
