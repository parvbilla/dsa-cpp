
#include <iostream>
#include<vector>
using namespace std;


vector<int> productOfArray(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
        }
    }
    
    return ans;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    vector<int> result = productOfArray(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}