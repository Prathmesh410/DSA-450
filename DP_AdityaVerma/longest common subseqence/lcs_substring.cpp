#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;
int t[1001][1001];



int lcs_Substirng(string X,string Y,int n,int m){
    int maxi=0;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i ==0 || j ==0 ){
                t[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1] == Y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                maxi++;
                
            }
            else{
                maxi= max(t[i][j],maxi);
                t[i][j] = 0;
            }
        }
    }


    return maxi;
}

int main() {
    string X = "abcdef";
    string Y = "a";
    int n = 6;
    int m = 8;
   
    cout<<lcs_Substirng(X,Y,n,m);
}