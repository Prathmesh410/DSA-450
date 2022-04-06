#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;


using namespace std;

int LIS(int X[],int n){
    int lis[n];
    lis[0]=1;

    

    for(int i=1;i<n;i++){
        //every ele is lis in itself
        lis[i]=1;
        for(int j=0;j<i;j++){
            if(X[j] < X[i] && lis[i] <= lis[j]){
                lis[i] = lis[j] +1;
            }
        }
    }

return *max_element(lis, lis+n);
}

int main() {
    int X[] ={5,8,7,1,9};
    int n=5;

    cout<<LIS(X,n);
}