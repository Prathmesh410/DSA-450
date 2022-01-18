#include "bits/stdc++.h"
using namespace std;

int findSubarray(int arr[],int n){
    unordered_map<int,int> um;
    int sum=0;
    int length=0;
    
    //we declared sum =0;so have to put -1 to map so second if should not be considered;
    um[0]=-1;
    for(int i=0; i< n; i++) {
        if(arr[i] == 0) {
            sum-=1;

        }
        else{
            sum += 1;
        }
        if(um.find(sum) == um.end()){
                um[sum]=i;
        }
        else{
            length=max(length, i - um[sum]);
        }
    }
    return length;
}

int main(){
    int n =7 ;
    int arr[] = {1,0,0,1,1,1,1,};
    int d = findSubarray(arr,n);
    cout<<d;
}