
#include <iostream>
#include<vector>
using namespace std;

int profit(vector<int> price){
    int maxProfit=0 , bestBuy= price[0];
    
    for(int i=0;i<price.size();i++){
        if(price[i]>bestBuy){
            maxProfit = max(maxProfit,price[i]-bestBuy);
        }
        bestBuy = min(bestBuy,price[i]);
    }
    
    return maxProfit;
}
int main()
{
    int result;
    vector<int> stock  = {7,5,2,1,3,4,9};
    result = profit(stock);
    cout<<"max profit :- "<<result;

    return 0;
}