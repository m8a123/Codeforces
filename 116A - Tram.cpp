#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n; 

    int currPassengers = 0; 

    int maxPassengers = 0; 

    for (int i = 0; i < n; i++){
        int a, b; 

        cin >> a >> b; 

        currPassengers -= a;

        currPassengers += b; 

        maxPassengers = max(maxPassengers, currPassengers);


    }

    cout << maxPassengers;

    

    
    return 0;
}