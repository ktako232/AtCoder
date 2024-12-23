#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A == B && B == C){
        cout << "Yes" << endl;
        return 0;
    }else{
        if((A == B + C) || (B == A + C) || (C == A + B)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
