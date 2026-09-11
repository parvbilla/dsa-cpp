#include<iostream>
#include<vector>
using namespace std;

int duplicateNumber(vector<int> arr){
    int n=arr.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    vector<int> grid = {1,3,2,2};
    int result = duplicateNumber(grid);
    if(result!=-1){
    cout<<"Repeat :- "<<result<<endl;
    }else{
        cout<<"Not Found..";
    }
}