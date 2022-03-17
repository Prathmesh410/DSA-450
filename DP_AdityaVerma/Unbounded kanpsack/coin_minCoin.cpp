#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;


int mincoins(int coin[],int N,int sum){
      
    for(int i=0;i<N+1;i++){
        for(int j=0;j<sum+1;j++){
             if(i == 1){
                if(j%coin[i-1] == 0){
                    t[i][j] = j/coin[i-1];
                }
                else{
                    t[i][j] = INT_MAX -1;
                }
            }
            if( j == 0){
                t[i][j] = 0;
            }

            if(i == 0) {
                t[i][j] = INT_MAX - 1;
            }
        }
    } 

    for(int i= 2;i<N+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coin[i-1] <= j){
                t[i][j] = min(1+t[i-1][j-coin[i-1]],t[i-1][j]);
            }
            else if(coin[i-1] > j){
                t[i][j] = t[i-1][j];
            }
        }
    } 
    return t[N][sum];
}



int main() {
    int coin[] = {1,2,3};
    int N = 3;
    int sum = 9;
    cout<<mincoins(coin,N,sum);
}