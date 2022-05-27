#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

unionelment(int arr1[],int arr2[],int n1,int n2){
    // map<int,int>mp;
    // if(n1>n2){
    //     int s1=0;
    //     rep(i,0,n2){
    //         if(mp[arr2[i]] != 1)
    //         mp[arr2[i]]=1;
    //     }
        
    //     rep(i,0,n1){
    //         if(mp[arr1[i]] == 1){
    //             mp[arr1[i]] = 0;
    //             s1++;
    //         }
    //     }
    //     return n1+n2-s1;

    // }
    // else{
    //      rep(i,0,n1){
    //          if(mp[arr1[i]] !=1)
    //         mp[arr1[i]]=1;
    //     }
    //     int s2=0;
    //      rep(i,0,n2){
    //         if(mp[arr2[i]] == 1){
    //             mp[arr2[i]] = 0;
    //             s2++;
    //         }
    //     }
    //      return n1+n2-s2;
    // }

 unordered_map<int,int>mp;
  rep(i,0,n1){
      mp[arr1[i]]++;
  }
  rep(i,0,n2){
      mp[arr2[i]]++;
  }
  return mp.size();
}
int main(){
    int arr1[] = {1,7,8,2};
    int arr2[] = {2,3,4,5};
    int n1=4;
    int n2=4;
    cout<<unionelment(arr1,arr2,n1,n2);
}