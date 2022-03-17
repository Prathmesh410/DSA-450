#include "bits/stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<int, vector<int>>
#define pii pair<int, int>
#define vii vector<int, pii>;
int t[1001][1001];

using namespace std;

string print_lcs(string X, string Y, int n, int m)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    // we will take help of filled matrix . while travesing backwords we compare X and Y elements and if they same some anyone in the string and reduce i and j. else we check which one is greater t[i-1][j] or t[j][j-1]. Based on that we decrease the i or j; return the reverse of thet array.
    int i = n;
    int j = m;
    string s = "";
    while (i > 0 || j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            s.push_back(X[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (t[i - 1][j] > t[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    // reverse the string
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string X = "abcdaf";
    string Y = "acbcf";
    int n = 6;
    int m = 5;

    cout << print_lcs(X, Y, n, m);
}