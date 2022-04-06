#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

int NoOfWays(int coin[],int N,int sum){
    for(int i=0;i<N+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i == 0){
                t[i][j] =0;
            }
            if(j == 0){
                t[i][j] =1;
            }
        }
    }
    for(int i=1;i<N+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coin[i-1] <=j){
                t[i][j] = t[i-1][j] + t[i][j-coin[i-1]];

            }
            else if(coin[i-1] > j){
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[N][sum];
}

int main() {
    int coin[] = {5,6,7,9,11,12,13,15};
    int N = 9;
    int sum = 8;

    cout<<NoOfWays(coin,N,sum);
}