#include<iostream>
using namespace std ;

void changeB(int &c){
    c=30;
}
int main(){

    int a =10;
    int* ptr=&a;

    int** parPtr = &ptr;
    
    cout<<"Ptr Value:- "<<*ptr<<"\n";
    cout<<"A Adress:- "<<&a<<"\n";
    
    cout<<"Value at A :- "<<*(&a)<<"\n";

    cout<<"\n";
    
    cout<<"Ptr Address :- "<<&ptr<<"\n";
    cout<<"Par Ptr Value:- "<<parPtr;
    
    cout<<"\n";
    
    cout<<"**parPtr value:- "<<**(parPtr)<<"\n";
    
    
    int b =5;
    changeB(b);
    cout<<"B value :- "<<b<<"\n";
    
    int c =50;
    int *ptr2=&c;
    
    cout<<"ptr2 :- "<<ptr2<<"\n";
    cout<<"ptr2++ :- "<<ptr2++<<"\n";
    cout<<"ptr2-- :- "<<ptr2--<<"\n";
    
}