#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

int lcs(string X,string Y,int n,int m){
    //base condition
    if(n == 0 || m == 0) {
         return 0;
    }
    if(t[n][m] != -1) return t[n][m];
    
    if(X[n-1] == Y[m-1]){
        return t[n][m]=1+lcs(X,Y,n-1,m-1);
    }
    else{
        return t[n][m]= max(lcs(X,Y,n-1,m),lcs(X,Y,n,m-1));
    }

   
    
}

int main() {
    string X = "abcdef";
    string Y = "abcdghef";
    int n = 6;
    int m = 8;
    t[n+1][m+1];
    memset(t,-1,sizeof(t));
    cout<<lcs(X,Y,n,m);
}