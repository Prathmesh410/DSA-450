#include <bits/stdc++.h>


#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main () {
       int n;
    cin>>n;

    int a[n];

    rep(i,0,n) {
        cin>>a[i];
    }

    priority_queue<int,vector<int>,greater<int>> ma;
    rep(i,0,n){
        ma.push(a[i]);
    }
    cout<<ma.top();


}