#include "bits/stdc++.h"
using namespace std;

bool findPair(int arr[],int n, int x) {
    int sum=0;
    unordered_map<int,int>um;
    for(int i=0;i<n;i++){
        //if the x- ar[i] is present then return true;
        //if it is equal to um.end() / 0 then return false;

        if(um.find(x-arr[i]) != um.end()){
            return true;
        }
        um[arr[i]]++;
    }
    return false;

}


int main() {
    int n=5;
    int x=2;
    int arr[5] = {1,9,4,7,5};
    if(findPair(arr,n,x)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    };

}