#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main(){
    ll n, k;
    cin >> n >> k;
    if(abs(n%k) <= abs(n%k-k)) cout << abs(n%k) << endl;
    else cout << abs(n%k-k) <<endl;
    
    return 0;
}
