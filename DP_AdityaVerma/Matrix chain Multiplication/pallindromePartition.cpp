#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;

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
    if(isPallindrome(X,i,j) == true && i !=0 && j != X.length()-1){
        return 0;
    }
         
        for(int k=i;k<=j-1;k++){
            int temp= pallindromePartition(X,i,k) + pallindromePartition(X,k+1,j) + 1;
            mn = min(temp,mn);
        }
    
    return mn;

}

int main(){
    string X="batata";
    int i=0;
    int j=4;
    cout<<pallindromePartition(X,i,j);
}