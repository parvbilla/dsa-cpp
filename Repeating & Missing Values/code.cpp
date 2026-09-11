#include<iostream>
#include<vector>
using namespace std;

vector<int> findMissingAndRepeatValue(vector<vector<int>> arr){
    int n = arr.size();
    vector<int> freq(n*n+1,0);
    
    for(auto row : arr){
        for(auto x : row){
            freq[x]++;
        }
    }
    
    int missing =0, reapeat=0;
    
    for(int i=1;i<=n*n;i++){
        if(freq[i]==2){
            reapeat=i;
        }
        if(freq[i]==0){
            missing=i;
        }
    }
    return {reapeat,missing};
}
int main(){
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };
    
    vector<int> result = findMissingAndRepeatValue(grid);
    cout<<"Repeat :- "<<result[0]<<endl;
    cout<<"Missing :- "<<result[1]<<endl;
}