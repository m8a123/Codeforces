#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

 
int main()
{
   
   int s, n;

   vector< pair <int,int> > vect;
   cin >> s >> n;
   int strength = s; 

   for (int i = 0; i < n; i++){
        int x, y; 

        cin >> x >> y; 
        vect.push_back(make_pair(x, y));
   }
   sort(vect.begin(), vect.end());

   for (int i = 0; i < n; i++){
        if (strength > vect[i].first){
            strength += vect[i].second; 
        }
        else {
            cout << "NO";
            return 0; 
        }
        
   }

   cout << "YES";
 
 
 
    return 0;
}