#include <iostream>
using namespace std;

int gcdNormal(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int gcdRec(int a, int b) {
    if (b == 0)
        return a;

    return gcdRec(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcdRec(a, b);
}

void revNum(int a){
    int newNum=0;
    while(a!=0){
        int digit = a%10;  
        newNum=(newNum*10+digit); 
        a/=10;
    }
    cout<<"new num :- "<<newNum<<endl;
}

// optimized approach

#include<iostream>
#include<climits>
using namespace std;


int reverse(int x) {
        long long newNum = 0;

        while (x != 0) {
            int digit = x % 10;
            newNum = newNum * 10 + digit;
            x /= 10;
        }

        if (newNum > INT_MAX || newNum < INT_MIN)
            return 0;

        return newNum;
    }

int main() {
    int a = 12;
    int b = 18;

    cout << "GCD Normal: " << gcdNormal(a, b) << endl;
    cout << "GCD Recursive: " << gcdRec(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;

    revNum(3745);

    cout<<"optimized appoach"<<endl;
    cout<<reverse(5473);

    return 0;
}