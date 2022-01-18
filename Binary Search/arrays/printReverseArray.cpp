//using recursion 
#include <bits/stdc++.h>


#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;



void reverseArray(int a[], int start,int n){
	if(start==n){
		return;
	}

	reverseArray(a,start+1,n);
	cout<<a[start]<<" ";
	
}


int main () {

int n; cin >> n;

int a[n];
rep(i,0,n){
		cin>> a[i];
} 
reverseArray(a , 0 ,n);

}




