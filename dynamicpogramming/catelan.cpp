#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

unsigned long int catelanNum(unsigned int n){

    unsigned long int catelan[n+1];

    catelan[0] = catelan[1] = 1;

    for(int i=2;i<=n;i++){
        catelan[i]=0;
        for(int j=0;j<i;j++){
            catelan[i] += catelan[j] * catelan[i-j-1]; 
        }
    }
    return catelan[n];
}

int main ()  {
    rep(i,0,10){
        cout<<catelanNum(i)<<endl;

    }

}