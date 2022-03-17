#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;


int LPS(string X,string Y,int n,int m){
   

     for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i == 0 || j== 0){
                t[i][j] = 0;
            }
        }
    }


    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1] == Y[j-1] ){
                t[i][j] = 1+ t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }


    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return t[n][m];
}
int main()
{
    string X = "agbcba";
    string Y= X;
 int n = 6;
 int m=6;
   reverse(Y.begin(),Y.end());
   cout<<Y<<endl;

 cout<<LPS(X,Y,n,m);
}