#include<iostream>
#include<vector>
using namespace std;

int uniqueFind(vector<int> arr){
    int i= 0;
    int j=1;
    int unique=1;
    int n = arr.size();

    while(j<n){
        if(arr[j]==arr[j-1]){
            j++;
            continue;
        }
        unique++;
        i++;
        arr[i]=arr[j];
        j++;
    }
    return unique;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3};
    int result = uniqueFind(arr);
    cout<<"unique result :- "<<result;
}