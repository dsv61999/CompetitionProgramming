#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main(){
    int n, ans = 0;
    bool exist_odd = false;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    while(!exist_odd){
        rep(i, n){
            if(a.at(i)%2 != 0){
                exist_odd = true;  // 奇数があるときにフラグを立てる
                break;
            }
        }
        if(!exist_odd) {  // 奇数がない(全部２で割り切れる)とき
            rep(i, n) a.at(i) /= 2;
            ans++;
        }
    }
    cout << ans << endl;
 
    return 0;
}