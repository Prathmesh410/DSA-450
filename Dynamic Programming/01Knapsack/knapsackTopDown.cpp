#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int  t[1001][1001];

using namespace std;



int knapsack(int wt[],int val[],int W, int N) {

//initialize
// for(int i=0;i<N+1;i++) {
//     for(int j=0;j<W+1;j++){
//             if(i ==0 || j ==0 ) {
//                 t[i][j] == 0;
//             }           
            
//             }
// }
memset(t,0,sizeof(t));

for(int i=1;i<N+1;i++) {
    for(int j=1;j<W+1;j++){
            if(wt[i-1] <= j){
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
    }
}
return t[N][W];

}


int main () {
     
    int wt[]= {2,7,3,4};
    int val[]= {1,3,3,4};
    int W=10;
    int N=4;
   
    cout<<knapsack(wt,val,W,N)<<endl;
}