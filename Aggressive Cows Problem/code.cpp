#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> arr, int n , int cows ,int mid){
    int count=1;
    int lastPos =arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]-lastPos >= mid){
            count++;
            lastPos=arr[i];
        }
        
        if(count==cows){
            return true;
        }
    }
    
    return false;
}

int aggresiveCow(vector<int> arr,int n , int cows){
    
    sort(arr.begin(),arr.end());
    int start=1;
    int end = arr[n-1]-arr[0];
    
    int ans=-1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(isPossible(arr,n,cows,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    
    return ans;
}
int main(){
    vector<int> arr={1,2,8,4,9};
    int n = arr.size();
    int cows=3;
    cout<<aggresiveCow(arr,n,cows);
    
}

