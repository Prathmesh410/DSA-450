#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

int countNoofSubset(int wt[],int sum, int N) {
    for(int i=0;i<N+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i == 0) {
                t[i][j] =0;
            }
            if(j == 0) {
                t[i][j] =1;
            }
        }
    }

    for(int i=1;i<N+1;i++){
        for(int j=1;j<sum+1;j++){
            if(wt[i-1] <= j){
                t[i][j] = t[i-1][j] + t[i-1][j-wt[i-1]];
            }
            else if(wt[i-1] > j){
                t[i][j] = t[i-1][j];
            }
        }
    }

return t[N][sum];
}

int main () {
     
    int wt[]= {1,1,2,3};
   
    int diff=1;
    
    int N = 4;
   
    int sum= 0;
    rep(i,0,N){
        sum+=wt[i];
    }
    cout<<sum<<endl;

    int s1 = (diff+sum)/2;
    cout<<s1<<endl;
    cout<<"The No of subset with diff "<<diff<<" is : "<<countNoofSubset(wt,s1,N)<<endl;
     
}
