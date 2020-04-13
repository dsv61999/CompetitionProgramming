#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t a,b,c;
    cin >> a >> b >> c;
    if(((a+b-c)*(a+b-c) > 4*a*b) && (a + b - c) < 0){ //条件はREADME.md
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}