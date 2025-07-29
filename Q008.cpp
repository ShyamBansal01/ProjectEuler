#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int> zero_ind;
    int ans = 0;
    int n  = s.size();
    zero_ind.push_back(0);
    for(int i = 0; i < n; i++)if(s[i] == '0')zero_ind.push_back(i);
    zero_ind.push_back(n);
    for(int i = 0; i < zero_ind.size(); i++){
        int left = zero_ind[i], right = zero_ind[i+1];
        if(right - left - 1 < 13)continue;
        int a = 1;
        int ct = 0;
        for(int j = left + 1; j < right; j++){
            if(ct >= 13){
                a *= s[j] - '0';
                a /= (s[j - 13] - '0');
            }
            if(ct < 13)a *= s[j] - '0';
            ct++;
            if(ct >= 13){
                ans = max(ans, a);
            }
        }
    }
    cout<<ans<<endl;
}
