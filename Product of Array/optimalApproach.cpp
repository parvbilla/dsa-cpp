
#include <iostream>
#include<vector>
using namespace std;


vector<int> productOfArray(vector<int> nums){
    int n=nums.size();
    vector<int> ans(n,1);
    
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    
    for(int i=n-1;i>=0;i--){
        ans[i]*=suffix;
        suffix*=nums[i];
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