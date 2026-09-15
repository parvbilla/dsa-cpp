#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> arr, vector<int> arr1){
    int n=arr.size();
    int m = arr1.size();

    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]<=arr1[j]){
            ans.push_back(arr[i]);
            i++;
        }else{
            ans.push_back(arr1[j]);
            j++;
        }
    }

    while(i<n){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr1[j]);
        j++;
    }
    return ans;
}
int main(){
    vector<int> arr1={1,3,5};
    vector<int> arr2 ={2,4,6};

    vector<int> result = mergeTwoSortedArray(arr1,arr2);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}