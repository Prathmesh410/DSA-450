#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

int permutation(int n, int k){
    if(n < k) return 0;
   
    int dp[n+1];
    memset(dp,0,sizeof(dp));

    dp[0]=1;

    for(int i=1;i<=n;i++){
        dp[i] = i* dp[i-1];
    }
    return dp[n]/dp[n-k]; 


}

int main() {
    int n=10;
    int k=2;
    cout<<permutation(n,k);
}