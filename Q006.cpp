#include <bits/stdc++.h>
using namespace std;
#define int long long
int func(int n){
    int x = (n*(n + 1))/2, y = (n*(n + 1)*(2*n + 1))/6;
    return (x*x - y);
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 100;
    cout<<func(n);
}
