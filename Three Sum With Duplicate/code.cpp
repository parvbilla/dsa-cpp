#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> ThreeSumWithDuplicate(vector<int> arr){
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]) {
            continue;
        }
        int left=i+1;
        int right=n-1;
        int sum=-arr[i];

        while(left<right){
            int s = arr[left]+arr[right];
            if(s==sum){
                ans.push_back({arr[i],arr[left],arr[right]});
                left++;
                right--;
            while(left<right && arr[left]==arr[left-1]){
                left++;
            }
            while(left<right && arr[right]==arr[right+1]){
                right--;
            }
            }else if(s<sum){
                left++;
            }else{
                right--;
            }
        }
        
    }
    return ans;
}

int main(){
    vector<int> arr = {-1,-1,0,1,2,4};
    vector<vector<int>>result = ThreeSumWithDuplicate(arr);
    for(auto pair:result){
        cout<<pair[0]<<" "<<pair[1]<<" "<<pair[2]<<endl;
    }
}