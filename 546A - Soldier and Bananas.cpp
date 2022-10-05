#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k, n, w; 
    cin >> k >> n >> w;
    int totalCost = 0; 
    for (int i = 1; i <= w; i++){
        totalCost += k * i;
    }

    int ans = totalCost - n;
    if (n >= totalCost){
        cout << 0; 
    }
    else{
        cout << ans; 
    };
    


    
    return 0;
}