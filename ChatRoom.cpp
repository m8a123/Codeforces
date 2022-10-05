#include <iostream>
#include <string>
using namespace std;

 
int main()
{
   
   string s; 
   cin >> s; 

   string h = "hello";
   int j = 0;
   for (int i = 0; i < s.length(); i++) {
        if (s[i] == h[j]){
            j++;
        }
   }

   if (j == h.length()){
    cout << "YES";
   }
   else{
    cout << "NO";
   }
 
 
 
 
    return 0;
}