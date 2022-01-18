#include "bits/stdc++.h"
using namespace std;

void findSum(int arr[],int n) {

    unordered_map<int,pair<int,int>>um;
    int a[4];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(um.find(arr[i]+arr[j]) != um.end()){
               
            cout<< "{"<<i<< " "<<j<<"}"<<" "<<"{"<<um[arr[i]+arr[j]].first<<" "<<um[arr[i]+arr[j]].second<<"}"<<endl;
               return;
            }
            um[arr[i]+arr[j]].first=i;
            um[arr[i]+arr[j]].second=j;
        }
        
    }
    cout <<"-1"<<endl;

};

int main() {
    int n=5;
    int arr[6] = {1,3,6,9,2,2};
   
    findSum(arr,n);

}
// time complexity will be O(n) 