#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;


int t[1001][1001];

int mcm(int arr[] ,int i,int j,int n){
   for(int i=0;i<n;i++){
       for(int j = 0;j<n;j++){
           if(i ==0 || j == 0 || i == j){
               return 0;
           }
           
       }
   }

   for(int i=1;i<n;i++){
       for(int j = 1;j<n;j++){
           if(i ==0 || j == 0 || i == j){
               return 0;
           }
           
       }
   }
   
}

int main () {
    int arr[] = {40,20,30,10,30};
    int n=5;
    int s=1;int e=n-1;
    memset(t,-1,sizeof(t));
    cout<<mcm(arr,s,e);

} 