#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

 int dp[1001][1001];



 int solve(int wt[], int val[], int w, int n){
     if(n == -1 || w == 0){
         return 0;
     }

     if(dp[n][w] != -1){
         return dp[n][w];
     }

     if(wt[n] > w){
         return dp[n][w] = solve(wt,val,w,n-1);
     }
     int a, b;
     a= val[n]+solve(wt,val,w-wt[n],n-1);
     b= solve(wt,val,w,n-1);
     return dp[n][w] = max(a,b);
 }

// void knapSack(int W, int wt[], int val[], int n) 
//     { 
//         //what is this nither iterative nor recursive
//       priority_queue<float> pq;
//       for(int i=0;i<n;i++){
//           float x = (float)val[i]/wt[i];
//           pq.push(x);
//       }

//     while (pq.top() !=0)
//     {
//         cout<<pq.top();
//         pq.pop();
        
//     }
    

//     }

int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       dp[n][W];
       memset(dp,-1,sizeof(dp));
       return solve(wt,val,W,n-1);
        
    }

int main(){
    int W=4;
    int wt[]={4,5,1};
    int val[]={1,2,3};
    int n=3;
   cout<< knapSack(W,wt,val,n);

}