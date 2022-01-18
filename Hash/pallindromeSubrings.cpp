#include "bits/stdc++.h"
using namespace std;

bool palindromeSubstring(string s, int start,int end){
    unordered_map<int,char> mp;
    int st= start;
    int ed= end;
   for(int i=0;i<s.size();i++){
       mp[i] = s[i];
     
   }
  
    while(st<ed){
        if(mp[st] != mp[ed]){
            return false;
        }
        else{
            st++;ed--;
        }
    }
    return true;


}

int main() {
    string s="abaaabaaaba";
    int start=1;
    int end=10;
  cout<<palindromeSubstring(s,start,end);
}