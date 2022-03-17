#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
bool t[1001][1001];

using namespace std;
vi ans;
int minSumSubset(int wt[],int sum,int N){
    int range=0;
    for(int i=0;i<N;i++) {
        range += wt[i];
        
    }

    for(int i=0;i<N+1;i++){
        for(int j=0;j<range+1;j++){
            if( i ==0 ){
                t[i][j] = false;
            }
            if( j == 0 ){
                t[i][j] = true;
            }
        }
    }
    
    for(int i=1;i<N+1;i++){
        for(int j=1;j<range+1;j++){
            if(wt[i-1] <= j) {
                t[i][j] = t[i-1][j-wt[i-1]] || t[i-1][j];
            }
            else if(wt[i-1]> j){
                t[i][j] = t[i-1][j];
            }
            
        }
    }
   
  
    for(int i=1;i<range/2;i++){
       if(t[N][i])
       ans.push_back(i);
    }


    int min1=INT_MAX;
    for(int i=0;i<ans.size();i++){
       
       min1 = min(min1,range-2*ans[i]);
    }
    cout<<"The minimum sum differance is : ";
    cout<<min1;

}

int main () {
     
    int wt[]= {1,2,7};
   
    int sum=10;
    
    int N = 3;
   
    minSumSubset(wt,sum,N);
}
