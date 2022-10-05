#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

bool isAllUpper(string s){
    bool flag = true; 
    for (int i = 0; i < s.length(); i++){
        if (islower(s[i])){
            flag = false;
        }
    }

    return flag; 
}

 
int main()
{
   
   string s, res;

   cin >> s; 

   if (s.length() == 1) {
    if (islower(s[0])) {
        res.push_back(toupper(s[0]));
    }
    else {
        res.push_back(tolower(s[0]));
    }

    cout << res; 
    return 0; 
   }

   else if (isAllUpper(s)){
        if (s.length() > 1){
            for (int i = 0; i < s.length(); i++){
                res.push_back(tolower(s[i]));
        }

        }

        cout << res; 
        return 0; 
   }

   else if (islower(s[0]) && s.length() > 1 && isAllUpper(s.substr(1, s.length()-1))){
            res.push_back(toupper(s[0]));

        
            for (int i = 1; i < s.length(); i++){
                res.push_back(tolower(s[i]));
            }
            cout << res; 
            return 0; 

   }

    
    cout << s; 
    
    
  
 
 
 
 
    return 0;
}