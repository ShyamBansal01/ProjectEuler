#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> dp;
    dp.push_back(1);
    dp.push_back(2);
    int x = 3;
    int ans = 2;
    while(x <= 4e6){
        dp.push_back(x);
        if(x%2 == 0)ans += x;
        int y = dp.size();
        x = dp[y-1] + dp[y-2];
    }
    cout<<ans<<endl;
}
