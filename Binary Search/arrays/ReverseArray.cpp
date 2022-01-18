#include <bits/stdc++.h>


#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

void reverseArray (int a[], int start, int end ) {
    if(start>=end){
        return;
    }

    int temp = a[start] ;
    a[start] = a[end] ;
    a[end] = temp;
   

    reverseArray(a,start+1,end-1);

}

void printArray(int a[],int n) {
    rep(i,0,n) {
        // cout<<"hello";
        cout<<a[i]<<" ";
    }
}

int main () {
    int n;
    cin>>n;

    int a[n];

    rep(i,0,n) {
        cin>>a[i];
    }
    // printArray(a,n);
    // cout<<endl;
    reverseArray(a,0,n-1);
    
    printArray(a,n);


}