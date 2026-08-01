

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int maxSum = INT_MIN;
    
    for(int start=0;start<5;start++){
        int currSum=0;
        for(int end=start;end<5;end++){
            currSum+=arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    
    cout<<"Max Sum of Sub Array :- "<<maxSum;

    return 0;
}