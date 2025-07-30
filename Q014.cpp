#include <bits/stdc++.h>
using namespace std;
#define int long long

unordered_map<int, int> dp;

int func(int n) {
    if(n == 1) return 1;
    if(dp.count(n)) return dp[n];
    if(n % 2 == 0)
        return dp[n] = 1 + func(n / 2);
    else
        return dp[n] = 1 + func(3 * n + 1);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int maxLength = 0, answer = 1;
    for(int i = 2; i <= 1e6; i++) {
        int length = func(i);
        if(length > maxLength) {
            maxLength = length;
            answer = i;
        }
    }

    cout << answer << '\n';
}
