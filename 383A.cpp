#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, quantity = 0;
    cin >> N;
    int T[N], V[N];
    for(int i = 0; i < N; i++){
        cin >> T[i] >> V[i];
        if(i >= 1){
            quantity -= T[i] - T[i-1];
            if(quantity < 0) quantity = 0;
        }
        quantity += V[i];
    }
    cout << quantity << endl;
    return 0;
}
