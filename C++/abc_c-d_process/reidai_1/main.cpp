#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define PI 3.14159265358979
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#include <iomanip>
#include <queue>
using ll =long long;
using P = pair<string , int>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;

int main(){
    ll n;
    cin >> n;
    vl b(n-1);
    rep(i,n-1) cin >> b.at(i);

    vl ans_layer(n);
    rep(i,n) {
        if (i == 0) ans_layer.at(i) = b.at(0);
        else if (i == ans_layer.size()-1) ans_layer.at(i) = b.at(i-1);
        else ans_layer.at(i) = min(b.at(i-1), b.at(i));

    }

    ll ans = 0;
    rep(i, n) ans += ans_layer.at(i);

    cout << ans << endl;

    return 0;
}