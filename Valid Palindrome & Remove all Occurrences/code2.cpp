#include<iostream>
#include<string>

using namespace std;


int main(){
    string str = "daabcaabcbc";
    string subStr = "abc";
    
    while(str.find(subStr) != string::npos){
        int result = str.find(subStr);
        str.erase(result,subStr.length());
    }
    
    cout<<str;
    
}