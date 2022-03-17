#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;


int t[101][101];

//this solve fuction divides the array in two parts each time the loop runs.
    int solve(int arr[],int i, int j){
        if (i >=j){
            return 0;
        }
        if(t[i][j] != -1){
            return t[i][j];

        }
        int mn = INT_MAX;
        for(int k=i;k+1<=j;++k){
            int temp= solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
            if(mn>temp)
            mn=temp;
            
        }
        return t[i][j]=mn;

    }

    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(t,-1,sizeof(t));
        int i=1;
        int j=N-1;
        return solve(arr,i,j);

    }

    int main(){
        int N=5;
        int arr[]={40,20,30,10,30};
        cout<<matrixMultiplication(N,arr)<<endl;
    }