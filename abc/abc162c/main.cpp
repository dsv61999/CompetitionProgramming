#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {   //ユークリッドの互除法
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main(){
    int K ;
    cin >> K;
    int ans = 0;
    for (int i = 1; i <= K; ++i) {
        for (int j = 1; j <= K; ++j) {
            for (int k = 1; k <= K; ++k) {
                ans += gcd(gcd(i, j), k);  //gcd(i, j, k) = gcd(gcd(i, j), k)
            }
        }
    }

    cout << ans <<endl;

    return 0;
}