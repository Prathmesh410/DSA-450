#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;
int t[1001][1001];


int egg_dropping(int e, int f){
    if(f == 0 || f == 1){
        return f;
    }
    if(e == 1){
        return f;
    }
    if(e <=0 ){
        return 0;
    }

    if(t[e][f] != -1){
        return t[e][f];
    }
    int mn = INT_MAX;
    for(int k=1;k<=f;k++){
        int B;
        int NB;
        if(t[e-1][k-1]!= -1){
            B=t[e-1][k-1];
        }
        else{
            B=egg_dropping(e-1,k-1);
        }
        if(t[e][f-k] != -1) {
            NB = t[e][f-k];
        }
        else{
            NB=egg_dropping(e,f-k);
        }


        int temp = max(B,NB) +1;
        mn = min(mn,temp);
 
    }
    return t[e][f] =mn;
}



 int main() {
     int e =3;
     int f=5;
     memset(t,-1,sizeof(t));
     cout<<egg_dropping(e,f);
 }