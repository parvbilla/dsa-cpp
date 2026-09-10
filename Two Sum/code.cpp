#include<iostream>
#include<vector>
using namespace std;


pair<int,int> twoSum(vector<int>arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            return {i,j};
        }
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> arr={5,2,11,7,15};
    pair<int,int> result = twoSum(arr,9);
    cout<<"First index :- "<<result.first<<endl;
    cout<<"Second index :- "<<result.second<<endl;
}