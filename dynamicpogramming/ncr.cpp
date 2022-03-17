#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;



int ncr (int n, int r) {
    if(n < r) return 0;
    //the value of r and (n-r) is always the same so to reduce the time complexity we use 
    // which is small
    if(r > (n-r)) r=n-r;
    // to reduce the the value;
    int mod= 1000000007;
    //coz its consider the 0;
    int dp[r+1];
    //
    memset(dp,0,sizeof(dp));
    // declare the value of the 0th index 1;
    dp[0] = 1;
    //
    for(int i=1;i<=n;i++){
        //the inner loop start from the end where j can be n or r depending on which is less;
        //for 1c2 n is less;
        //for 4c2 r is less;
        
        for(int j=min(n,r);j>0;j--){
            dp[j] = (dp[j] + dp[j-1])%mod;

        }
    }

    return dp[r];
}



int  main () {
    int n=4;
    int r=2;
    cout<< ncr(n,r);
}