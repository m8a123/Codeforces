#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s; 

    unordered_map<char, int> m; 
  
    for (int i = 0; i < s.length(); i++) { 
        m[s[i]]++; 
    } 
  
    if (m.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    


    
    return 0;
}