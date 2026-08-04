
#include <iostream>
using namespace std;


int power(double x , int n){
    int binaryForm = n;
    int ans=1;
    
    if(binaryForm<0){
            x=1/x;
            binaryForm = -binaryForm;
        }

        
    while(binaryForm>0){
        if(binaryForm%2==1){
            ans*=x;
        }
        x*=x;
        binaryForm/=2;
    }
    return ans;
}
int main()
{
    int result = power(5,4);
    cout<<"result :- "<<result;

    return 0;
}