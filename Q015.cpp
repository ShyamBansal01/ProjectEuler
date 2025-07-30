#include <bits/stdc++.h>
using namespace std;
#define int long long

int binomial(int n, int k) {
    int res = 1;
    for(int i = 1; i <= k; i++) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

signed main() {
    int n, m;
    cin >> n >> m;
    cout << binomial(n + m, n) << "\n";
}
