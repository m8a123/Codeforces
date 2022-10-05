#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; 
    cin >> s; 
    string ans; 

    int uppers = 0;
    int lowers = 0; 

    for (int i = 0; i < s.length(); i++){
        if (islower(s[i])){
            lowers++;
        }
        if (isupper(s[i])){
            uppers++;
        }
    }

    if (lowers >= uppers){
        for (int i = 0; i < s.length(); i++){
            ans += tolower(s[i]);
        }
    }
    else{
        for (int i = 0; i < s.length(); i++){
            ans += toupper(s[i]);
        }
    }

    cout << ans; 

    
    return 0;
}