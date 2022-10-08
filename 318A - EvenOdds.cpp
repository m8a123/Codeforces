#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, k;
    cin >> n >> k;
 
    if (k <= (n+1)/2) {
        cout << k*2-1;
    }
    else{
        cout << (k - ((n+1)/2)) *2;
    }
    
 
 
    
    return 0;
}