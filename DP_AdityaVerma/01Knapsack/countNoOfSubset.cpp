#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

int countofSubset(int wt[],int sum,int N){
    for(int i=0;i<N+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i == 0){
                t[i][j] = 0;
            }
            if(j == 0) {
                t[i][j] = 1;
            }
        }
    }

    for(int i=1;i<N+1;i++){
        for(int j=1;j<sum+1;j++){
            if(wt[i-1] <=j){
                t[i][j]= t[i-1][j-wt[i-1]]+t[i-1][j];

            }
            else if(wt[i-1] > j){
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[N][sum];
}

int main () {
     
    int wt[]= {2,3,5,6,8,10};
   
    int sum=10;
    int N=6;
  
   
    cout<<countofSubset(wt,sum,N)<<endl;
}