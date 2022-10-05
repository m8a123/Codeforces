#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; 
    cin >> s; 

    int zeroCount = 0; 
    int oneCount = 0; 

    for (int i = 0; i < s.length(); i++){
        if (s[i] == '0'){
            zeroCount++;
        }
        if (s[i] == '1'){
            zeroCount = 0;
        }
        if (zeroCount == 7){
            cout << "YES";
            return 0; 
        }
    }

    for (int i = 0; i < s.length(); i++){
        if (s[i] == '1'){
            oneCount++;
        }
        if (s[i] == '0'){
            oneCount = 0;
        }
        if (oneCount == 7){
            cout << "YES";
            return 0; 
        }
    }

    cout << "NO";

    

    
    return 0;
}