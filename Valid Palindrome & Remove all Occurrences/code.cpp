#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

bool isAlphaNumeric(char ch){
    if(ch >='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z'){
        return true;
    }
    return false;
}

int main(){
    string str1;
    
    cout<<"enter the word ";
    cin>>str1;
    
    int st=0,end=str1.length()-1;
    
    while(st<end){
        if(!isAlphaNumeric(str1[st])){
            st++; continue;
        }
        if(!isAlphaNumeric(str1[end])){
            end--; continue;
        }
        
        if(tolower(str1[st])!= tolower(str1[end])){
            // return false;
            
            cout<<"not pailindrome";
            
            return 0;
        }
        
        st++ ; 
        end--;
    }
    
    // return true;
    cout<<"pailindrome";
    
}