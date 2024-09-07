// ------------Nested loop------------loop inside loop------------

#include<iostream>
using namespace std;

int main(){
    // int n=5;
    int n;
    cout<<"Enter how many line you want to print: ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        // cout<<"*" << " ";
        int m = 5;
        for(int j = 1; j<=m;j++){
            cout<<"*"<<" ";
        }
         cout<<endl;
    }
   
    return 0;
}