#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int n){
    string s = to_string(n);
    int i = 0, r = s.size() - 1;
    while(i <= r){
        if(s[i] != s[r]) return false;
        i++; r--;
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans = 0;
    for(int i = 999; i >= 100; i--){
        for(int j = 999; j >= 100; j--){
            int prod = i * j;
            if(check(prod)) {
                ans = max(ans, prod);
            }
        }
    }
    cout << ans << '\n';
}
