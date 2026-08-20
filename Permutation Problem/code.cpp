#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void permutation(vector<int> &arr){
    int n=arr.size();
    int pivot=-1;
    
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;
        }
    }
    
    if(pivot==-1){
        reverse(arr.begin(),arr.end());
        return;
    }
    
    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
        swap(arr[i],arr[pivot]);
         break;
        }
    }
    
    int left=pivot+1;
    int right=n-1;
    
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main(){
    vector<int> arr = {1,2,5,4,3};
    permutation(arr);
    for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
}
}