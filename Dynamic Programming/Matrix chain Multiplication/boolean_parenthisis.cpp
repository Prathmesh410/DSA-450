// #include "bits/stdc++.h"
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define vi vector<int>
// #define vvi vector<int, vector<int>>
// #define pii pair<int, int>
// #define vii vector<int, pii>;
//  using namespace std;

//  int Boolean_parenthesis(string X,int i,int j,bool istrue){
//      if(i> j){
//          return false;
        
//      }
     
//      if(i == j){
//          if(istrue == true){
//              return X[i] == 'T';
//          }
//          else{
//              return X[i] == 'F';
//          }
//          if(istrue == false){
//              return X[i] == 'F';
//          }
//          else{
//              return X[i] == 'T';
//          }
//      }
//     int ans=0;
//      for(int k=i+1;k<=j-1;k=k+2){
//          int lt = Boolean_parenthesis(X,i,k-1,true);
//          int lf = Boolean_parenthesis(X,i,k-1,false);
//          int rt = Boolean_parenthesis(X,k+1,j,true);
//          int rf = Boolean_parenthesis(X,k+1,j,false);

//          if(X[k] =='&'){
//              if(istrue == true){
//                  ans = ans + lt*rt;
//              }
//              else{
//                  ans = ans + lt*rf + lf*rt + lf*rf;
//              }
//          }
//         else if(X[k] =='|'){
//              if(istrue == true){
//                  ans = ans + lt*rt + lt*rf + lf*rt;
//              }
//              else{
//                  ans = ans  + lf*rf ;
//              }
//          }
//         else if(X[k] == '^'){
//              if(istrue == true){
//                  ans = ans + lt*rf + lf*rt;
//              }
//              else{
//                  ans = ans +  lf*rf + lt*rt;
//              }
//          }
//      }

//      return ans;

//  }

//  int main(){
//      string X = "T|T&F^T";
//      int i=0;
//      int j=X.size() -1;
//      cout<<Boolean_parenthesis(X,i,j,true);

//  }


//memoization
#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;
int t[1001][1001][2];


 int Boolean_parenthesis(string X,int i,int j,bool istrue){
     if(i> j){
         return false;
        
     }
     
     if(i == j){
         if(istrue == true){
             return X[i] == 'T';
         }
         else{
             return X[i] == 'F';
         }
         if(istrue == false){
             return X[i] == 'F';
         }
         else{
             return X[i] == 'T';
         }
     }
    if(t[i][j][istrue] != -1){
        return t[i][j][istrue];
    }
    int ans=0;
     for(int k=i+1;k<=j-1;k=k+2){

         int lt,lf,rt,rf;
         if(t[i][k-1][1] != -1){
             lt = t[i][k-1][1];
         }
         else{
            lt = Boolean_parenthesis(X,i,k-1,true);
         }


         if(t[i][k-1][0] != -1){
             lf = t[i][k-1][0];
         }
         else{
            lf = Boolean_parenthesis(X,i,k-1,false);
         }


         if(t[k+1][j][1] != -1){
             rt = t[k+1][j][1];
         }
         else{
            rt = Boolean_parenthesis(X,k+1,j,true);
         }


         if(t[k+1][j][0] != -1){
             rf = t[k+1][j][0];
         }
         else{
            rf = Boolean_parenthesis(X,k+1,j,false);
         }

        //  int lt = Boolean_parenthesis(X,i,k-1,true);
        //  int lf = Boolean_parenthesis(X,i,k-1,false);
        //  int rt = Boolean_parenthesis(X,k+1,j,true);
        //  int rf = Boolean_parenthesis(X,k+1,j,false);

         if(X[k] =='&'){
             if(istrue == true){
                 ans = ans + lt*rt;
             }
             else{
                 ans = ans + lt*rf + lf*rt + lf*rf;
             }
         }
        else if(X[k] =='|'){
             if(istrue == true){
                 ans = ans + lt*rt + lt*rf + lf*rt;
             }
             else{
                 ans = ans  + lf*rf ;
             }
         }
        else if(X[k] == '^'){
             if(istrue == true){
                 ans = ans + lt*rf + lf*rt;
             }
             else{
                 ans = ans +  lf*rf + lt*rt;
             }
         }
     }

     return t[i][j][istrue] = ans;

 }

 int main(){
     string X = "T|T&F^T";
     int i=0;
     int j=X.size() -1;
     memset(t,-1,sizeof(t));
     cout<<Boolean_parenthesis(X,i,j,true);

 }