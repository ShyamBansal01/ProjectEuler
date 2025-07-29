#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------------------------------------

vector<vector<int>> a(20, vector<int>(20, 0));

int down(int i, int j){
    if(i > 16) return INT_MIN;
    return a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
}

int up(int i, int j){
    if(i < 3) return INT_MIN;
    return a[i][j] * a[i-1][j] * a[i-2][j] * a[i-3][j];
}

int left(int i, int j){
    if(j < 3) return INT_MIN;
    return a[i][j] * a[i][j-1] * a[i][j-2] * a[i][j-3];
}

int right(int i, int j){
    if(j > 16) return INT_MIN;
    return a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
}

int up_left(int i, int j){
    if(i < 3 || j < 3) return INT_MIN;
    return a[i][j] * a[i-1][j-1] * a[i-2][j-2] * a[i-3][j-3];
}

int up_right(int i, int j){
    if(i < 3 || j > 16) return INT_MIN;
    return a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3];
}

int down_left(int i, int j){
    if(i > 16 || j < 3) return INT_MIN;
    return a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3];
}

int down_right(int i, int j){
    if(i > 16 || j > 16) return INT_MIN;
    return a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 20; j++)
            cin >> a[i][j];
    
    int ans = INT_MIN;
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            vector<int> values = {
                                    up(i, j),
                                    down(i, j),
                                    left(i, j),
                                    right(i, j),
                                    up_left(i, j),
                                    up_right(i, j),
                                    down_left(i, j),
                                    down_right(i, j)
                                };
        ans = max(ans, *max_element(values.begin(), values.end()));
        }
    }

    cout << ans << '\n';
    return 0;
}
