#include<iostream>
using namespace std;


void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,3,1,2,9};
    bubbleSort(arr,6);
}