#include<iostream>
using namespace std;


int maxRowSum(int arr[][4],int r , int c){
    int maxSum=0;
    
    for(int i=0;i<r;i++){
        int rowSum=0;
        for(int j=0;j<c;j++){
            rowSum+=arr[i][j];
        }
        maxSum = max(maxSum,rowSum);
    }
    return maxSum;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<maxRowSum(arr,3,4);
}
