#include <bits/stdc++.h>
using namespace std;
int N;

void dfs(string s, char mx){
    if(s.length() == N){
        cout << s <<endl;
    }else{
        for (char c = 'a'; c <= mx; c++) {  //char型の比較は辞書順
            dfs(s+c, ((c==mx) ? (char)(c+1) : mx)); //s_iが最大値mxの時, s_{i+1}が取りうる最大値はmx+1
        }
    }
}

int main() {
    cin >> N;
    dfs("",'a');
    return 0;
}