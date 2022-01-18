#include "bits/stdc++.h"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define vvi vector<int,vector<int>>
#define pii pair<int,int>
#define vii vector<int,pii>;
using namespace std;

bool checkForPairs(int arr[],int n,int k){
    unordered_map<int,int> um;
    int f=n;
    rep(i,0,n){

        int rem=arr[i]%k;
        
        
        if(um[k-rem] == 0){
            
            cout<<k-rem<<"k-rem"<<endl;
            um[rem]++;
            cout<<um[rem]<<endl;
            
        }
        else{
            um[k-rem]--;
            cout<<um[k-rem]<<endl;
            
            
            f-=2;
        
        }
    }
    if(f==0){
        
        return true;
    }
    else
    
     return false; 
}

int main(){
    int arr[] = {6, 14, 12 ,14};
    int n=4;
    int k=2;
    cout<<checkForPairs(arr,n,k)<<endl;
}
