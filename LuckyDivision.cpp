#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

bool isLucky(int n){
    int count = 0; 

    string s = to_string(n);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7'){
            count++; 
        }

    };

    if (count == s.length()) {
        return true; 
    }
    else{
        return false;
    }

}
 
int main()
{
   int n;
   cin >> n; 

    if (isLucky(n)) {
        cout << "YES";
        return 0; 
    }
    for (int i = 0; i < n; i++){
        if (isLucky(i) && n % i ==0){
            cout << "YES";
            return 0; 
        }
    }

    cout << "NO";
   
 
 
 
 
    return 0;
}