#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
   int k; 
   int xsum = 0;
   int ysum = 0;
   int zsum = 0; 
   cin >> k;

   for (int i = 0; i < k; i++){
    
        int x, y, z; 
        cin >> x >> y >> z; 

        xsum += x; 
        ysum += y; 
        zsum += z; 
   } 

   if (xsum == 0 && ysum == 0 && zsum == 0) {
    cout << "YES";
   }
   else {
    cout << "NO";
   }




    return 0;
}