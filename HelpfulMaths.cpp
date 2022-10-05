#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    string res = "";
    cin >> s;  

    if (s.length() == 1){
        cout << s; 
    }

    else{
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1') res += "1+";
        }
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '2') res += "2+";
        }
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '3') res += "3+";
        }

        res.pop_back();
        cout << res; 
    }
    


    
    return 0;
}