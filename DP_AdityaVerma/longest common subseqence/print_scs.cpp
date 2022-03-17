#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

void print_ShortestCommonSuperSubseqense(string X, string Y, int n, int m)
{
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i == 0 || j== 0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1] == Y[j-1] ){
                t[i][j] = 1+ t[i-1][j-1];
            }
            else{
                t[i][j] = min(t[i-1][j],t[i][j-1]);
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<t[n][m]<<endl;





    int i = n;
    int j = m;
    string ans="";
    while (i > 0 || j > 0)
    {
        if (X[i - 1] == Y[i - 1])
        {
            ans.push_back(X[i - 1]);
            cout<<"0"<<endl;
            i--;
            j--;
        }
        else
        {
            if (t[i - 1][j] >= t[i][j - 1])
            {
                ans.push_back(X[i - 1]);
                cout<<X[i-1]<<"1"<<endl;
                i--;
            }
            else
            {

                ans.push_back(Y[j - 1]);
                 cout<<Y[j-1]<<"2"<<endl;
                j--;
            }
        }
    }
    while (i>0)
    {
        ans.push_back(X[i-1]);
        i--;
    }
    while (j>0)
    {
        ans.push_back(Y[j-1]);
        j--;
    }
    
    

    reverse(ans.begin(),ans.end());
    cout<<ans;
}

int main()
{
    string X = "acbcf";
    string Y = "abcdaf";
    int n = 5;
    int m = 6;

    print_ShortestCommonSuperSubseqense(X, Y, n, m);
}