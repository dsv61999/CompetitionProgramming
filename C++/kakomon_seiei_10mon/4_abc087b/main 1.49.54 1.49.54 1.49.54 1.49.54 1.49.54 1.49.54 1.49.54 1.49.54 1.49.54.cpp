#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a, b, c, x, ans = 0;
    cin >> a >> b >> c >> x;
    rep(i, a+1){  //0からaまで
        rep(j, b+1){  //0からbまで
            rep(k, c+1){  //0からcまで
                if(x == k*50 + j*100 + i*500) ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}