#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

 
int main()
{
   
    int n, s; 
    cin >> n; 

    int ans = 0; 
    int bigCar = 0; 


   for (int i = 0; i < n; i++){
        cin >> s; 
        if (s == 4 || s == 3){
            ans++;
        }
        else {
            bigCar += s; 
        }
   }

    if (bigCar > 0){
        cout << ans + 1; 
    } 
    else{
        cout << ans; 
    }
 
 
 
    return 0;
}