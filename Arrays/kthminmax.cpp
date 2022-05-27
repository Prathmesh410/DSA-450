#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

int kthMinElement(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>q;
    rep(i,0,n){
        q.push(arr[i]);
    }
    rep(i,0,k-1){
        q.pop();
    }
    return q.top();
    
}
int kthSmallest(int arr[], int l, int r, int k) {
        //code here
          priority_queue<int> q;
        for(int i=0;i<k;i++){
            q.push(arr[i]);
        }
        
        for(int i=k;i<=r;i++){
            if(q.top() > arr[i]){
                q.pop();
                q.push(arr[i]);
            }
        }
    
    return q.top();
    }


int main () {
    int arr[] = {7 ,10 ,4 ,3 ,20 ,15};
    int n= 6;
    int k=3;
    cout<<kthMinElement(arr,n,k);
}
