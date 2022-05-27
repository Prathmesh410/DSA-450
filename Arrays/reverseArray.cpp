#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;


void reverseArray(int arr[], int s,int n){
    if(s>=n){
      
        return;

    }
    int temp=arr[s];
    arr[s] = arr[n-1];
    arr[n-1] = temp;
    reverseArray(arr,s+1,n-1);
    
}



int main(){
    int n = 5;
    int s = 0;
    int arr[] = {1,2,3,4,5};
    reverseArray(arr,s,n);
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
   
}