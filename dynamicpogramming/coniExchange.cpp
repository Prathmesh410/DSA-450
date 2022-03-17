#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
using namespace std;

int findWays(int arr[], int n, int k)
{

    unordered_map<int, int> m;
    int count = 0;

    for (int i = 0; i < k; i++)
    {
        int f = n;
        while (f > arr[i])
        {
           

            if (m[f] != 0)
            {
                count += m[f];

            }
            f -= arr[i];

            

            if(f>0){
            m[f]++;
            }
            
            if (f == 0)
            {
                count++;
            }
        }
    }
    return count;
}


calcWays(int arr[],int n, int k) {
    
}

int main()
{
    int arr[] = {1,2,3};
    int n = 4;
    int k = 3;
    int ans = findWays(arr, n, k);
    int ans2 = calcWays(arr,n,k);
    cout<<ans;
}