#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sqaureOfTwoSortedArray(vector<int> arr){
    int m=arr.size();
    vector<int> pos;
    vector<int>neg;
    for(int i=0;i<m;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }else{
            pos.push_back(arr[i]);
        }
    }

    if(pos.size()==0){
        for(int i=0;i<m;i++){
            neg[i]*=neg[i];
        }
        reverse(neg.begin(),neg.end());
        return neg;
    }

    if(neg.size()==0){
        for(int i=0;i<m;i++){
            pos[i]*=pos[i];
        }
        return pos;
    }
    int i=0,j=0;
    int p=pos.size();
    int n=neg.size();
    vector<int> ans;

    for(int i=0;i<n;i++){
        neg[i]*=neg[i];
    }
    reverse(neg.begin(),neg.end());

    for(int i=0;i<p;i++){
        pos[i]*=pos[i];
    }

    while(i<p && j<n){
        if(pos[i]<=neg[j]){
            ans.push_back(pos[i]);
            i++;
        }else{
            ans.push_back(neg[j]);
            j++;
        }
    }

    while(i<p){
        ans.push_back(pos[i]);
        i++;
    }
    while(j<n){
        ans.push_back(neg[j]);
        j++;
    }
    
    return ans;
}
int main(){
    vector<int> arr={-4,-2,1,3,5,6};
    vector<int> result=sqaureOfTwoSortedArray(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}