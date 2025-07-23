#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(i%3 == 0 || i%5 == 0)ans+=i;
    }
    cout<<ans<<endl;
}
