#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    vector<int> num(101, 0);  //0から100の要素ででそれぞれ何個あるかを保持
    rep(i, n) {
        cin >> d.at(i);
        num.at(d.at(i))++;
    }

    int ans = 0;
    rep(i, 101){
        if(num.at(i) > 0) ans++;
    }
    cout << ans << endl;

    return 0;
}