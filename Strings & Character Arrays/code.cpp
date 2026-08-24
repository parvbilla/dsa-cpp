#include<iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main(){
    char str[]= {'a','b','c','\0'};
    char str1[]= "college";
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
     cout<<str1[3]<<endl;
      cout<<strlen(str1)<<endl;
      
      string str2="parv ";
      string str3="billa";
      
      string str4=str2+str3;
      cout<<str4<<endl;
      
      for(char ch:str2){
          cout<<ch<<" ";
      }
      
      cout<<"\n";
      string new_str="college";
      
      reverse(new_str.begin(),new_str.end());
      cout<<new_str<<endl;
    
    
    
    
}