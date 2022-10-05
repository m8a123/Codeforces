#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b; 
    int ans = 0; 

    cin >> a >> b;
    
    while (a <= b){
        a *= 3;
        b *= 2;
        ans++; 
    }

    cout << ans; 


    
    return 0;
}