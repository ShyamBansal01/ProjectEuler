#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> ans = {1}; 

    for (int i = 1; i <= 1000; i++) {
        int carry = 0;
        for (int j = ans.size() - 1; j >= 0; j--) {
            int prod = ans[j] * 2 + carry;
            ans[j] = prod % 10;
            carry = prod / 10;
        }

        while (carry) {
            ans.insert(ans.begin(), carry % 10);
            carry /= 10;
        }
    }

    cout << accumulate(ans.begin(), ans.end(), 0LL);
}
