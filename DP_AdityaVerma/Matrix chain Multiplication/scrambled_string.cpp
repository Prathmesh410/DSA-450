#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
 using namespace std;
unordered_map<string,bool> mp;


bool scrambled_string(string a, string b) {
    //base conditions
    // should equal in length
    if(a.length() != b.length()){
        return false;
    }
    //if they are empty they can be called as scrambled so return true;
    if(a.empty() && b.empty()){
        return true;
    }
    //if both are same strings then return true;
    if(a.compare(b) == 0){
        return true;
    }
    //we compare the equals . if the 3rd condition is not satisfied the a single char in both the string are diff.so ret
    
    if(a.length() <=1){
        return false;
    }
    //memoization
    string key= a;
    key.append(" ");
    key.append(b);
    if(mp.find(key) != mp.end()){
        return mp[key];
    }

    // for the subproblems we need to find the length of string for the partition
    int n= a.length();
    bool flag = false;
    for(int i=1;i<=n-1;i++){
        //first condition is to check if the strings are swaped at that position and sencond id they are not;
    if((scrambled_string(a.substr(0,i),b.substr(n-i,i)) && scrambled_string(a.substr(i,n-i),b.substr(0,n-1))) || 
    scrambled_string(a.substr(0,i),b.substr(0,i)) && scrambled_string(a.substr(i,n-i),b.substr(i,n-1)))
    {
        flag = true;
        break;
    }
    }
    return mp[key] = flag;
}

 int main() {
     string a ="abcdefg";
     string b ="gfedcba";
     cout<<scrambled_string(a,b);
 }