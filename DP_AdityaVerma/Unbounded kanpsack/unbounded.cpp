#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

int unbounded(int arr[],int val[],int N,int size){
    for(int i=0;i<size+1;i++){
        for(int j=0;j<N+1;j++){
            if(i ==0 || j ==0){
                t[i][j] =0;
            }
        }
    }
    for(int i=1;i<size+1;i++){
        for(int j=1;j<N+1;j++){
            if(arr[i-1] <= j) {
                t[i][j] = max(t[i-1][j] , val[i-1]+t[i][j-arr[i-1]]);
            }
            else if(arr[i-1] > j) {
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[size][N];
}

int main() {
    int arr[] = {2,3,5,6,4};
    int val[] = {1,3,7,6,4};

    int N=10;
    int size = 5;
    t[N+1][size+1];
    cout<<unbounded(arr,val,N,size);
}