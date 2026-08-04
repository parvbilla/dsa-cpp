
#include <iostream>
#include<vector>
using namespace std;


int water(vector<int> container){
    int maxWater=0;
    int lp =0 , rp= container.size()-1;
    
    while(lp<rp){
        int w = rp-lp;
        int ht = min(container[lp],container[rp]);
        int currWater = w*ht;
        
        maxWater = max(maxWater,currWater);
        
        container[lp] < container[rp] ? lp++ : rp-- ;
    }
    return maxWater;
}
int main()
{
    vector<int> c1 = {0,9,2,8,3,7,4,6,5};
    int result = water(c1);
    cout<<"Result :- "<<result ;

    return 0;
}