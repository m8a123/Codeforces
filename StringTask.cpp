#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
 
int main()
{
   string str, res; 
 
   cin >> str;
 
 
 
   vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y',
                           'A', 'E', 'I', 'O', 'U', 'Y'};
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(),
                      str[i]) != vowels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    };
 
    for (int i = 0; i < str.length(); i++){
        res.push_back('.');
        res.push_back(tolower(str[i]));
    };
 
    cout << res; 
 
 
 
 
    return 0;
}