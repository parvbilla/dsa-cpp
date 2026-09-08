#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> arr,int target){
    int NoOfRows=arr.size();
    int NoOfColumn=arr[0].size();
    
    int r=0,c=NoOfColumn-1;
    
    while(r<NoOfRows && c>=0){
        if(target==arr[r][c]){
            return true;
        }
        if(target < arr[r][c]){
            c--;
        }else{
            r++;
        }
    }
    
    return false;
    
}

int main(){
    vector<vector<int>> arr = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };
    
    if(searchMatrix(arr,6)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}