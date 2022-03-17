#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;
int t[1001][1001];


int kanpsack(int wt[],int val[],int W, int N){
    if(W == 0 || N == 0) {
        return 0;
    }
    if(t[N][W] != -1) return t[N][W];

    if(wt[N-1] > W) return t[N][W] = kanpsack(wt,val,W,N-1);

    else if(wt[N-1] <= W) {
        return t[N][W] = max(val[N-1] + kanpsack(wt,val,(W-wt[N-1]),N-1), kanpsack(wt,val,W,N-1));
    }
}


int main(){
  
    memset(t,-1,sizeof(t));
    int wt[]= {2,7,3,4};
    int val[]= {1,3,3,4};
    int W=10;
    int N=4;
    cout<<kanpsack(wt,val,W,N)<<endl;
}