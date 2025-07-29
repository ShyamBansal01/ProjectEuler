#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v(100);
    for(int i = 0; i < 100; i++)cin>>v[i];
    vector<int> ans;
    int carry = 0;
    
        
    for(int j = 49; j >= 0; j--){
        int a = 0;
        for(int i = 0; i < 100; i++){
            a += (v[i][j] - '0');
        }
        a += carry;
        ans.push_back(a%10);
        a /= 10;
        carry = a;
    }
    while(carry){
        ans.push_back(carry%10);
        carry /= 10;
    }
    int x = ans.size();
    for(int i = x - 1; i >= x - 10; i--)cout<<ans[i];
}
