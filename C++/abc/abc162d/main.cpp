#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    ll r_count = 0, g_count = 0, b_count = 0;
    for (int i = 0; i < n; ++i){
        if(s.at(i) == 'R') r_count++;
        else if(s.at(i) == 'G') g_count++;
        else if(s.at(i) == 'B') b_count++;
    }

    ll out_count = 0;   // (Si != Sj != Sk)を満たしつつ(j-i != k-j)を満たさないもの
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i - j < 0 || i + j > n - 1) break;
            else if (s.at(i - j) != s.at(i) && s.at(i) != s.at(i + j) &&
                     s.at(i - j) != s.at(i + j)) {    // Si = s.at(i-j), Sj = s.at(i), Sk = s.at(i+j)
                out_count++;
            }
        }
    }
    ll ans = (r_count * g_count * b_count) - out_count; // (Si != Sj != Sk)を満たす → (nCr_count * nCg_count * nCb_count)

    cout << ans <<endl;

    return 0;
}