#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

int sort(int arr[],int left, int right){
    while (left<=right)
    {
        if(arr[left]<0 && arr[right] <0){
            left++;
        }
        else if(arr[left] > 0 && arr[right] <0){
            swap(arr[left],arr[right]);
            left++;right--;
        }
        else if(arr[left] >0 && arr[right] > 0){
            right--;
        }
        //left <0 and right >0; or both left and right are equal or equal to zero;
        else{
            left++;
            right--;
        }
    }
    
}

int main () {
    int n= 9;
    int arr[] = {-7, -3, -1, 2, 4, 5, 6, 8, 9 };
    int j=0;
    sort(arr,0,n);
//  rep(i,0,n){
//         if(arr[i]<0){
//             if(i != j){
//                 swap(arr[i],arr[j]);
//                 j++;
//             }
//         }
//  }
   rep(i,0,n){
       cout<<arr[i]<<" " ;
   }
}