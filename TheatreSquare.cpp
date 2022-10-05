#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   double n, m, a; 

   cin >> n >> m >> a; 
   
   long long len = ceil(n/a);  
   long long wid = ceil(m/a);

   long long res = len * wid; 

   cout << res; 



    return 0;
}