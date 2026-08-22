#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>


int main(){
    
    
    
    list<int> l ;
    
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.pop_front();
    l.pop_back();
    
     deque<int> d ;
    
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.pop_front();
    d.pop_back();
    
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    cout<<"deque [1] :- "<<d[1];
    
    vector<int> arr = {1,2,3,4,5};
    
    arr.clear();
    cout<<arr.empty();
    cout<<"\n";
    
    arr.push_back(1);
    arr.push_back(2);
    
    
    cout<<*arr.begin();
    cout<<"\n";
    cout<<*arr.end();
    cout<<"\n";
    
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<"\n";
    
    pair<int,int> p = {1,2};
    cout<<p.first<<"\n";
    cout<<p.second<<"\n";
    
    pair<int,pair<int,int>> p2 = {1,{2,3}};
    
    cout<<"p2 first :- "<<p2.first<<"\n";
    cout<<"p2 second 1 :- "<<p2.second.first<<"\n";
    cout<<"p2 second 2 :- "<<p2.second.second<<"\n";
    
    vector<pair<int,int>> vp = {{1,2},{3,4},{4,5}};
    
    vp.push_back({6,7});
    vp.emplace_back(8,9);
    
    for(auto i : vp){
        cout<<i.first<<" ";
        cout<<i.second<<" ";
    }
    cout<<"\n";
    
    stack<int> s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<"top :- "<<s.top();
    cout<<"\n";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    stack<int> s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s2.swap(s);
    cout<<"\nsize of of s :- "<<s.size();
    cout<<"\nsize of of s2 :- "<<s2.size();
    cout<<"\n";
    
    queue<int> q1;
    
    q1.push(1);
    q1.push(2);
    q1.push(3);
    
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    priority_queue<int>pq;
    
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    
    cout<<"\n";
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    cout<<"\n";
    
    priority_queue<int,vector<int> , greater<int>>pq1;
    
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    
}