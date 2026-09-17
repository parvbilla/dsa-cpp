#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


int threeSumClosest(vector<int> arr , int target){
    sort(arr.begin(),arr.end());
    int n = arr.size();

    int closestSum=arr[0]+arr[1]+arr[2];
    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int left=i+1;
        int right=n-1;
        
        while(left<right){
            int sum = arr[i]+arr[left]+arr[right];

            if(sum==target){
                return sum;
            }

            if(abs(sum-target)<abs(closestSum-target)){
                closestSum=sum;
            }else if (sum<target){
                left++;
            }else{
                right--;
            }
        }
    }

    return closestSum;
}
int main(){
    vector<int> arr ={-1,2,1,-4};
    int target=1;
    int result = threeSumClosest(arr,target);
    cout<<result<<endl;
}