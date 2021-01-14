#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n, y;
    cin >> n >> y;
    vector<int> ans(3, -1);
    rep(i, n+1){
        for (int j = 0; i+j < n+1; ++j){  // j < n+1の時, kが負の場合も受け入れてしまう
            int k = n - i - j;
            if(i+j+k == n && y == i*10000 + j*5000 + k*1000) {  //条件の自由度分のループで済む
                ans.at(0) = i;
                ans.at(1) = j;
                ans.at(2) = k;
            }
        }
    }

    rep(i, 3) cout << ans.at(i) <<" ";
    cout << "" << endl;

    return 0;
}