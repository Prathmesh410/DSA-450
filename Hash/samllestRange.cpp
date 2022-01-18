#include "bits/stdc++.h"
using namespace std;

vector<int> findRange(int k, int n,int KSortedArray[][n]){
    map<int,int>mp;
    vector<int>ans;
    int currArray=-1;int f=k;
    for(int i=0; i<k;i++){
        for(int j=0;j<n;j++){
            if(mp[KSortedArray[i][j]] == 0){
            mp[KSortedArray[i][j]]=i;
            }
        }
    };
    cout<<mp[0];
    return ans;
    // map<int,int> :: iterator it;
    // for(it=mp.begin();it<mp.end();i++){
    //     cout<<mp[it];
    // }


        //code below me
         if(mp[it]== 0){
                continue;
            }
        if(currArray == -1){
           
            if(mp[it] != mp[it+1]){
                ans.push_back(it);
                currArray=mp[it];
                f--;
            }

        }
        if(f != 0 || f !=1){
            if(mp[it] != currArray ){
                currArray=mp[it];
                f--;
            }
            ans.push_back(it);
           
        }
        if(f == 1) {
            ans.push_back(it);
            break;
        }
       
    }
    return ans;

};

int main() {
    int k =3;
    int n =5;
    int KSortedArray[][n] ={{1,3,5,7,9},{0,2,4,6,8,},{2,3,5,7,11}};

    vector<int> ans2 = findRange(k ,n , KSortedArray);
    for(int i=0;i<ans2.size();i++){
       cout<<ans2[i]<<" ";
   };
}