#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

 
int main()
{
   
   int a, b, c; 

   cin >> a >> b >> c; 

   int x1 = max((a * b), (a + b));

   int y1 = max((x1*c), (x1+c));

   int x2 = max((b * c), (b + c));

   int y2 = max((a*x2), (a+x2));
 
    cout << max(y1, y2); 
 
 
 
    return 0;
}