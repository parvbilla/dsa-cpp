#include<iostream>
using namespace std;

pair<int,int> linearSearch(int arr[][4] ,int r, int c, int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(key==arr[i][j]) return {i,j};
        }
    }
    return {-1,-1};
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    pair<int,int> ans= linearSearch(arr,3,4,12);
    cout<<"row :- "<<ans.first<<" column :- "<<ans.second;
}