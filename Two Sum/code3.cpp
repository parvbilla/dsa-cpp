#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;


vector<int> twoSum(vector<int> arr , int target){
    unordered_map<int,int> m;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int second=target-first;

        if(m.find(second)!=m.end()){
            ans.push_back(m[second]);
            ans.push_back(i);
            break;
        }
        m[first]=i;
    }
    return ans;
    
}

int main(){
    vector<int> arr={5,2,11,7,15};
       vector<int> result = twoSum(arr,9);
    cout<<" first index :- "<<result[0]<<endl;
    cout<<" Second index :- "<<result[1]<<endl;
}