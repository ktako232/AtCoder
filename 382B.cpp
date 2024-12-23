#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, D, count = 0;
    string S;
    cin >> N >> D;
    cin >> S;
    for(int i = 0; i < D; i++){
        for(int j = N-1; j > -1; j--){
            if(S[j] == '@' && count == 0){
                S[j] = '.';
                count++;
            }
        }
        count = 0;
    }
    for(int i = 0; i < N; i++){
        cout << S[i];
    }
    cout << endl;
}
