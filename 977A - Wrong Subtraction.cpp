#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; 

    cin >> n >> k; 

    for (int i = 0; i < k; i++){
        if (n%10 == 0){
            n /= 10; 
        }
        else{
            n--;
        }
    }
    
    cout << n; 


    
    return 0;
}