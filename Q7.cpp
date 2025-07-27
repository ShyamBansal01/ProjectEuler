#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
vector<bool> is_prime(1e6 + 3, 1);
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i <= 1e6; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= 1e6; j += i){
                is_prime[j] = false;
            }
        }
    }
    int a = 0;
    for(int i = 0; i <= 1e6; i++){
        if(is_prime[i]){
            a++;
        }
        if(a == 10001){
            cout<<i;
            break;
        }
    }
}
