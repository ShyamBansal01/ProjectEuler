#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
int func(int n, vector<bool> &isPrime){
    int ans = 1;
    for(int i = 2; i*i <= n; i++){
        int ct = 0;
        while(n && isPrime[i] && n%i == 0){
            ++ct;
            n /= i;
        }
        ans *= (ct + 1);
    }
    if(n > 1)return ans*2;
    return ans;
}
//------------------------------------------------------------------------

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool> isPrime(1e7 + 1, true);

    isPrime[0] = isPrime[1] = 0;

    for(int i = 2; i <= 1e7; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= 1e7; j += i)isPrime[j] = false;
        }
    }
    for(int i = 1; i <= 1e7; i++){
        if(func((i*(i +1))/2, isPrime) >= 500){
            cout<<(i*(i+1))/2;
            break;
        }
    }
}
