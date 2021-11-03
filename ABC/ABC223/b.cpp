#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    string s; cin >> s;
    int n = size(s);
    vector<string> v(n);
    rep(i, n) {
        v[i] = s.substr(i, n - i) + s.substr(0, i);
    }
    cout << *min_element(begin(v), end(v)) << endl;
    cout << *max_element(begin(v), end(v)) << endl;
    return 0;
}