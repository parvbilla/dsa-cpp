#include<iostream>
#include<vector>
using namespace std;


int recursiveBinarySearch(vector<int> arr , int st , int end , int target){
    if(st<=end){
        int mid = st + ((end-st)/2);
        if(target>arr[mid]){
            return recursiveBinarySearch(arr,mid+1,end,target);
        }else if (target < arr[mid]){
            return recursiveBinarySearch(arr,st,mid-1,target);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int index = recursiveBinarySearch(arr,0,arr.size()-1,7);
    cout<<"Index :- "<<index;
}
