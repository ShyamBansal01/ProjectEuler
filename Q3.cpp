#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
vector<bool> primes(5000000, true);
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 600851475143;
    
    for(int i = 2; i <= 5000000; i++){
        if(primes[i]){
            for(int j = i*i; j <= 5000000; j += i){
                primes[j] = false;
            }
        }
    }
    int i = (int)sqrtl(n);
    for(; i >= 2; i--){
        if(n%i == 0 && primes[i]){
            cout<<i<<endl;
            break;
        }
    }
}
