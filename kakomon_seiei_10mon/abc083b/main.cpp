#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int f(int n){   //各桁の数値の合計を計算する関数
    int ans = 0;
    while (n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main(){
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    rep(i, n+1){
        if(a <= f(i) && b >= f(i)) ans += i;
    }
    cout << ans << endl;

    return 0;
}