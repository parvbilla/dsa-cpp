#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumSmaller(vector<int> arr , int target){
    int n = arr.size();
    int ans=0;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;

        while(left<right){
            int sum = arr[i]+arr[left]+arr[right];
            if(sum<target){
                ans+=(right-left);
                left++;
            }else{
                right--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {-2, 0, 1, 3};
    int target = 2;

    cout << threeSumSmaller(arr, target);
}