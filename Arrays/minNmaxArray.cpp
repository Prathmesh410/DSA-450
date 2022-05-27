#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;
struct pair
    {
        int min;
        int max;
    };
//brute force;
// void minNmax(int arr[], int N){
//     int minM= INT_MAX;
//     int maxM = INT_MIN;

//     rep(i,0,N){
//         maxM = max(maxM,arr[i]);
//         minM = min(minM,arr[i]);
//     }
//     cout<<maxM<<" "<<minM;



// }


struct pair minNmax(int arr[], int N){
    struct pair minMax;
    int i=0;
    if(N%2 == 0 ){
        if(arr[0] > arr[1]){
            minMax.max = arr[0];
            minMax.min = arr[1];
        }
        else{
            minMax.max = arr[1];
            minMax.min = arr[0];
        }
        int i=2;
    }
    else{
        minMax.max = arr[0];
        minMax.min = arr[0];
        int i=1;
    }
    
    while (i<N-1)
    {
        if(arr[i] > arr[i+1]){
            if(arr[i] > minMax.max){
                minMax.max = arr[i];
            }
            if(arr[i+1] < minMax.min){
                minMax.min = arr[i+1];
            }
            
        }
        else{
            if (arr[i+1] > minMax.max)
            {
                minMax.max = arr[i+1];
            }
            if(arr[i] < minMax.min){
                minMax.min = arr[i];
            }
            
        }
        i += 2;






    }
    return minMax;
    
}

int main(){
    int arr[] = {5,34,45,2,56,344};
    int N = 6;
  pair minMax =  minNmax(arr,N);
  cout<<minMax.max<< " " <<minMax.min;
   
}