#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int ans = 0; 
    cin >> n; 
    vector<int> vals;

    int total = 0; 

    for (int i = 0; i < n; i++){
        int c; 
        cin >> c; 
        total += c; 
        vals.push_back(c);

    }
    sort(vals.begin(), vals.end(), greater<int>());
    

    int curr = 0;
    int j = 0;
    while (curr <= (total / 2)){
        ans++;
        curr += vals[j];
        j++;
    }

    cout << ans; 

    

    
    return 0;
}