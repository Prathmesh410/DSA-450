#include "bits/stdc++.h"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define vvi vector<int,vector<int>>
#define pii pair<int,int>
#define vii vector<int,pii>;
using namespace std;

bool checkForPairs(int arr[],int n,int k){
    if(n % 2 != 0) return (false);
       unordered_map<int,int> mp;
       
       int cnt = 0;
       
       for(int i=0; i<n; i++){
           int rem = arr[i] % k;
           int newRem = k - rem == k ? 0 : k - rem;
           if(mp.find(newRem) != mp.end() && mp[newRem]){
               cnt += 2;
               mp[newRem]--;
           }
           else mp[rem]++;
       }
       return cnt == n;
   }


int main(){
    int arr[] = {13 ,1, 9, 3, 1 ,14 ,5, 2, 12 ,7 ,10 ,4 ,7, 5 ,13, 5 ,6, 6 ,3, 11 ,2 ,9};
    int n=22;
    int k=5;
    cout<<checkForPairs(arr,n,k)<<endl;
}
