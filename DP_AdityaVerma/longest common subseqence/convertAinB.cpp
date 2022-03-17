#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

void AintoB(string X,string  Y,int n,int m){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j == 0) {
                t[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1] == Y[j-1]){
                t[i][j] = 1+ t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }

    cout<<"No of deletion : "<<n-t[n][m]<<endl;
    cout<<"No of insertion : " <<m-t[n][m];

}

int main()
{
    string X = "heap";
    string Y = "pea";
    int n = 4;
    int m = 3;

 AintoB(X, Y, n, m);
}