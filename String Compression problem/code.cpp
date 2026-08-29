#include<iostream>
#include<vector>
#include<string>
using namespace std;


int compress(vector<char> &chr){
    int n = chr.size();
    int idx=0;
    
    for(int i=0;i<n;i++){
        char ch=chr[i];
        int count=0;
        while(i<n && ch==chr[i]){
            count++;i++;
        }
        
        chr[idx++]=ch;
        
        if(count>1){
            string str=to_string(count);
            for(char dig:str){
                chr[idx++]=dig;
            }
        }
        i--;
    }
    return idx;
}
int main(){
    vector<char> chr {'a','a','b','b','b','c','c'};
    int len= compress(chr);
    for(int i=0;i<len;i++){
        cout<<chr[i]<<" ";
    }
}