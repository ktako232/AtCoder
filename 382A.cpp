#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, D, count = 0;
    string S;
    cin >> N >> D;
    cin >> S;
    for(int i = 0; i < N; i++){
        if(S[i] == '.') count++;
    }
    count += D;
    cout << count << endl;
}
