#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> A_1(3);
    vector <int> A_2(3);
    vector <int> A_3(3);
    
    for(int i=0; i < 3; i++){
        cin >> A_1.at(i);
    }
    for(int i=0; i < 3; i++){
        cin >> A_2.at(i);
    }
    for(int i=0; i < 3; i++){
        cin >> A_3.at(i);
    }
    
    int N;
    cin >>N;
    vector <int> b(N);
    for(int i = 0; i < N; i++){
        cin >> b.at(i);
    }
    
    for(int i=0; i< N; i++){
        for(int j=0; j < 3; j++){
            if(b.at(i)==A_1.at(j)){
                A_1.at(j) = 1000;
            }
        }
    }
    for(int i=0; i< N; i++){
        for(int j=0; j < 3; j++){
            if(b.at(i)==A_2.at(j)){
                A_2.at(j) = 1000;
            }
        }
    }
    for(int i=0; i< N; i++){
        for(int j=0; j < 3; j++){
            if(b.at(i)==A_3.at(j)){
                A_3.at(j) = 1000;
            }
        }
    }
    //ビンゴ判定
    string output="No";
    int sumA_1 = 0;
    for(int i=0; i < 3; i++){
        sumA_1 += A_1.at(i);
    }
    if(sumA_1==3000){
        output = "Yes";
    }
    int sumA_2 = 0;
    for(int i=0; i < 3; i++){
        sumA_2 += A_2.at(i);
    }
    if(sumA_2==3000){
        output = "Yes";
    }
    int sumA_3 = 0;
    for(int i=0; i < 3; i++){
        sumA_3 += A_3.at(i);
    }
    if(sumA_3==3000){
        output = "Yes";
    }
    
    if(A_1.at(0)+A_2.at(0)+A_3.at(0) == 3000)
        output = "Yes";
    if(A_1.at(1)+A_2.at(1)+A_3.at(1) == 3000)
        output = "Yes";
    if(A_1.at(2)+A_2.at(2)+A_3.at(2) == 3000)
        output = "Yes";
    
    if(A_1.at(0)+A_2.at(1)+A_3.at(2) == 3000)
        output = "Yes";
    if(A_1.at(2)+A_2.at(1)+A_3.at(0) == 3000)
        output = "Yes";
    cout << output <<endl;
}
