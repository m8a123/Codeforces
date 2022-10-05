#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    int min; 
    int ans = 0; 
    vector<int> arr;
    cin >> n >> k;
     
    for (int i = 0; i < n; i++){
        int a; 
        cin >> a;
        if (i == k-1){
            min = a;
        }
        arr.push_back(a);
    }

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] >= min && arr[i] != 0){
            ans++;
        }
    }

    cout << ans; 


    
    return 0;
}