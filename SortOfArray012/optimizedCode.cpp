#include<iostream>
#include<vector>
using namespace std;

void sortArray012(vector<int> arr,int n){
    int zero =0 , one=0, two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zero++;
        if(arr[i]==1) one++;
        if(arr[i]==2) two++;
    }
    for(int i=0;i<n;i++){
        if(i<zero){
            arr[i]=0;
        }else if(i<zero+one){
            arr[i]=1;
        }else{
            arr[i]=2;
        }
    }
    
    cout<<"Sorted Array 0s , 1s and 2s :- ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    sortArray012(arr,arr.size());
    
}