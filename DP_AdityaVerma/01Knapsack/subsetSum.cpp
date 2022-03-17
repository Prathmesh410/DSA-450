#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
bool t[1001][1001];

using namespace std;

bool subsetSum(int wt[],int sum,int N){
    //initialize the matrix with elements are zero to false and s=where sum is zero to true;
    for(int i=0;i<N+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i == 0){
                t[i][j]=false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }


    for(int i=1;i<N+1;i++){
        for(int j=1;j<sum+1;j++){
           if(wt[i-1] <=j){
               t[i][j] =t[i-1][j-wt[i-1]] or t[i-1][j];
           }
           else if(wt[i-1] > j) {
               t[i][j] = t[i-1][j];
           }
        }
    }

    return t[N][sum];

}

int main () {
     
    int wt[]= {25,30,3,8,10};
   
    int sum=11;
    int N=5;
   
   
    cout<<subsetSum(wt,sum,N)<<endl;
}