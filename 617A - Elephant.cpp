#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    cin >> n; 
    int ans = 0; 
    while (n > 5){
        n -= 5;
        ans++; 
    }

    ans++;

    cout << ans; 

    
    return 0;
}