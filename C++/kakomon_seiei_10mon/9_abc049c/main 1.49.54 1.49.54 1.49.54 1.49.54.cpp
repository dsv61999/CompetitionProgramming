#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<string> divide = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    rep(i, divide.size()) reverse(divide.at(i).begin(),divide.at(i).end());

    string ans = "YES";
    for (int i = 0; i < s.size();) { //i=s.size()の時break
        if(s.substr(i, 5) == divide.at(0) || s.substr(i, 5) == divide.at(2)) i += 5;
        else if(s.substr(i, 6) == divide.at(3)) i += 6;
        else if(s.substr(i, 7) == divide.at(1)) i +=7;
        else{
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;

    return 0;
}