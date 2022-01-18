#include "bits/stdc++.h"
using namespace std;

vector<int> elements(int A[],int n, int k){
    //this code is not working for multiple test cases;
    //writing a new code ;
    // unordered_map<int,int>um;
    // queue<int>q;
    // vector<int>ans;
    // int ele=k;
    // for(int i=0;i<k;i++){ 
    //     q.push(A[i]);
    //     if(um[A[i]] ==1){
    //         ele--;
            
    //     }
    //     um[A[i]]++;
    // }
    // ans.push_back(ele);
    // int ele2=k;
    // for(int i= k ;i<n;i++){
        
    //    int f= q.front();
    //   q.pop();
    //   ele2--;
    //   q.push(A[i]);
    //   ele2++;
    //   //there should be onr more f in the queue that ur are decreasing just 
    //   //did no solved the bug
      
    //   if(um.find(f) != um.end()){
    //       um[f]--;
    //   }
    //   if(um[A[i]] ==1){
    //         ele2--;
            
            
    //   }
    //       um[A[i]]++;
      
    //   ans.push_back(ele2);
      
    // }

    unordered_map<int,int>um;
    vector<int> ans;
    int ele =k;

    for(int i=0;i<k;i++){
        if(um[A[i]] != 0){
            ele -= 1;
            
        }
        
        um[A[i]]++;
    }
    ans.push_back(ele);

   for(int i=k;i<n;i++){
       if(um[A[i-k]]-1 ==0 ){
           ele--;
           
       }
       um[A[i-k]]--;
       if(um[A[i]] == 0){
            ele ++;
        }
       um[A[i]]++;

      
        ans.push_back(ele);

   }
    return ans;
}


int main() {
    int n=16;
    int k = 10;
    int A[] = {45, 20, 41 ,30 ,32 ,18, 98, 72, 82 ,76, 10, 28 ,68 ,57 ,98, 54};
   
   vector<int> ans2= elements(A,n,k);
   
   for(int i=0;i<ans2.size();i++){
       cout<<ans2[i]<<" ";
   }

}


