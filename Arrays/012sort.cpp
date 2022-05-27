#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

void sort(int arr[],int N){
    // int pt1 = 1;
    // int pt2 = N-1;
    // for (int i =0 ;i<N;i++){
    //     if(arr[i] == 0){
    //         swap(arr[i],arr[pt1-1]);
    //         pt1++;
    //     }
    //     // if(arr[i] == 1){
    //     //     swap(arr[i],arr[pt1+1]);
    //     // }
    //     if(arr[i] == 2){
    //         swap(arr[i],arr[pt2-1]);
    //         pt2--;
    //     }
    // }
    // for(int i=0;i<N;i++){
    //     cout<<arr[i]<<" ";
    // }

    int low=0;
    int mid=0;
    int high=N-1;
    

    while (mid <= high ){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
           
           
        }
       else if(arr[mid] ==1){
            mid++;
          
        }
       else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            
            high--;

        }
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
   
}


int main() {
    int N = 10;
    int arr[] ={0,2,1,0,2,1,2,2,1,1,1};
    sort(arr,N);
}