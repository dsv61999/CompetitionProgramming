#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n, point_a = 0, point_b = 0;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i += 2) point_a += a.at(i);
    for (int j = 1; j < n; j += 2) point_b += a.at(j);

    cout << point_a - point_b << endl;

    return 0;
}