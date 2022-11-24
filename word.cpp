#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
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

    string s;
    cin >> s; int n = s.size();
    int lc = 0, uc = 0;
    forn(i,n){
        if(islower(s[i])){
            lc++;
        }
    }
    uc = n - lc;
    if(lc < uc){
        forn(i,n){
            if(islower(s[i]) != 0){ // islower(char c) returns ( != 0) 
                s[i] = s[i] - 32;   // if character is lowercase else returns 0 
            }
        }
    }
    else{
         forn(i,n){
            if(islower(s[i]) == 0){
                s[i] = s[i] + 32;
            }
        }
    }
    forn(i,n){
        cout << s[i] ;    
    }
    return 0;
}