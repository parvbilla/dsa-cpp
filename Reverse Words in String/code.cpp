#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

void reverseAString(string &s){
    
    reverse(s.begin(),s.end());
    
    int n = s.length();
    
    for(int i=0;i<n;i++){
        
        string ans="";
        
    while(i<n && s[i]!=' '){
        ans+=s[i];
        i++;
    }
    
    reverse(ans.begin(),ans.end());
    cout<<ans<<" ";
    }
}

int main(){
    string s = "world pen";
    cout<<endl;
    reverseAString(s);
}