#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
     int arr2[4][3];
     
     for(int i=0;i<4;i++){
         cout<<"enter elements of row "<<i<<" ";
         for(int j=0;j<3;j++){
             cin>>arr2[i][j];
         }
         cout<<endl;
     }
     
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // linear search 
    int key;
    cout<<"enter the key :- ";
    cin>>key;
    bool found=false;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key){
                cout<<"found";
                found=true;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        cout<<"not found";
    }
    
     
     
}