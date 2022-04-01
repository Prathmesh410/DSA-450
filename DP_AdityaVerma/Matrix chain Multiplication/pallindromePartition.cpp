#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;
int t[1001][1001];
 bool isPallindrome(string X,int i,int j){
     while (i<j)
     {
       if(X[i] != X[j]){
           return false;
       }
       i++;j--;
       return true;
     }
     
 }


int pallindromePartition(string X,int i,int j){
    
    if(i >= j){
       return 0;
    }
    int mn= INT_MAX;
    if(isPallindrome(X,i,j) == true ){
        return t[i][j] =  0;
    }
    if(t[i][j] != -1){
        return t[i][j];
    }
         
        for(int k=i;k<=j-1;k++){
            int l=0;
            int r=0;
            if(t[i][k] != -1 ) {
                l = t[i][k];
            }
            else{
                l= pallindromePartition(X,i,k);
            }
            if(t[k+1][j] != -1 ) {
                r = t[k+1][j];
            }
            else{
                r= pallindromePartition(X,k+1,j);
            }
          
            
            int temp= l + r + 1;
            

            mn = min(temp,mn);
            
            t[i][j] = mn;
        }
    
    return mn;

}

int main(){
    string X="badaks";
    int i=0;
    int j=X.length()-1;
    memset(t,-1,sizeof(t));
    cout<<pallindromePartition(X,i,j);
}