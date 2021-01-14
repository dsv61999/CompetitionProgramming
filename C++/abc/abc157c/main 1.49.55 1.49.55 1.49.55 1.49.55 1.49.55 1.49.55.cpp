#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, M ;
    cin >> N >> M;
    vector <int> s(M);
    vector <int> c(M);
    for (int i = 0; i < M; ++i) {
        cin >> s.at(i) >> c.at(i);
    }
    ///////////////
 
    vector <int> out(N);
    for (int i = 0; i < N; ++i) {
        out.at(i) = 0;
    }
    if(N != 1){
        out.at(0) = 1;
    }
  
 
    for (int j = 0; j < M; ++j) {
        out.at(s.at(j)-1) = c.at(j);
    }
 
    int not_exist = 0;

    for (int i=0; i < M; i++){
        for (int j = 0; j < M; ++j) {
            if((s.at(i)==s.at(j)) && (c.at(i) != c.at(j))){
                not_exist = 1;
            }
        }
    }
 
    if((out.at(0) == 0) && N != 1){
        not_exist=1;
    }
    if(not_exist == 1){
        cout << -1 << endl;
    }
    if(not_exist != 1) {
        for (int i = 0; i < N; ++i) {
            cout << out.at(i);
        }
    }
}