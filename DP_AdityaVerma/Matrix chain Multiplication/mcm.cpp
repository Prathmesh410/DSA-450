#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;


int t[1001][1001];
int mcm(int arr[] ,int i,int j){
    if(i >= j){
        return 0;
    }
    if(t[i][j] != -1){
        return t[i][j];
    }
    int mn= INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp = mcm(arr,i,k) + mcm(arr,k+1,j) +arr[i-1]*arr[k]*arr[j];
        if(temp<mn){
            mn = temp;
        }
    }
    t[i][j] = mn;
    return t[i][j];
   
}

int main () {
    int arr[] = {40,20,30,10,30};
    int n=5;
    int i=1;int j=n-1;
    memset(t,-1,sizeof(t));
    cout<<mcm(arr,i,j);

} 