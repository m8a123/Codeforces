#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s; 
    cin >> n >> s;

    int ans = 0; 

    if (n == 1) {
        cout << 0; 
        return 0; 
    }
    for (int i = 0; i < n-1; i++){
        if (s[i+1] == s[i]) {
            ans++;
        }
    }

    cout << ans; 
    


    
    return 0;
}