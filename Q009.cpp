#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool found = false;
    for(int a = 1; a <= 500 && !found; a++) {
        for(int b = 1; b <= 500; b++) {
            int x = a*a + b*b;
            int y = sqrtl(x);
            if(y*y == x) {
                if(a + b + y == 1000) {
                    cout << (a * b * y) << '\n';
                    found = true;
                    break;
                }
            }
        }
    }
}
