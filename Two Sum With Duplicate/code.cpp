#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> TwoSumWithDuplicate(vector<int> arr,int target){
    int left=0;
    int right =arr.size()-1;
    vector<vector<int>> ans;

    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==target){
            ans.push_back({arr[left],arr[right]});
            left++;
            right--;
        while(arr[left]==arr[left-1]){
            left++;
        }
        while(arr[right]==arr[right+1]){
            right--;
        }
        }else if(sum<target){
            left++;
        }else{
            right--;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3,3,3};
    vector<vector<int>>result = TwoSumWithDuplicate(arr,4);
    for(auto pair:result){
        cout<<pair[0]<<" "<<pair[1]<<endl;
    }
}