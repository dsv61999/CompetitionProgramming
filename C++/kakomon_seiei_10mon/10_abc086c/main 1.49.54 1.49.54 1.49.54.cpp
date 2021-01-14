#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    vector<int> t(n+1,0);
    vector<int> x(n+1,0);
    vector<int> y(n+1,0);
    rep(i, n) cin >> t.at(i+1) >> x.at(i+1) >> y.at(i+1);

    string ans = "Yes";
    rep(i, n) {
        int dist = abs(x.at(i+1) - x.at(i)) + abs(y.at(i+1) - y.at(i));
        int time = t.at(i+1)-t.at(i);
        if(dist > time) ans = "No";
        if(dist%2 != time%2) ans = "No"; //パリティ
    }
    cout << ans << endl;

    return 0;
}