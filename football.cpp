#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <climits>
#include <cassert>
#include <cstdio>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <string>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main(){
    string s = "";
    cin >> s;
    int n = s.size();
    int c=1;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]){
            c++;
        }
        else{
            c=1;
        }
        if(c == 7){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}