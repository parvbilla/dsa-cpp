#include<iostream>
#include<vector>

using namespace std;


bool isArmstrong(int n){
    int copyN=n;
    int cubeNum=0;
    while(n!=0){
        int digit=n%10;
        cubeNum+=(digit*digit*digit);
        n/=10;
    }
    return cubeNum==copyN;
}
void printDigit(int n){
    int count=0;
    while(n>0){
        int digit=n%10;
        cout<<digit<<" ";
        n/=10;
        count++;
    }
    cout<<endl<<"no of digit :- "<<count<<endl;
}


int countPrime(int n){
    
    if(isArmstrong(153)){
     cout<<"isArmstrong yes"<<endl;   
    }else{
        cout<<"isArmstrong no"<<endl;
    }
    printDigit(3457);
    vector<bool> isPrime(n+1,true);
    int count=0;
    
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;
        }
        
        for(int j=i*2; j<n;j=j+i){
            isPrime[j]=false;
        }
    }
    
    return count;
}
int main(){
    cout<<countPrime(40);
}