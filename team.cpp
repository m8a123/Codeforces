#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k;
    int ans = 0;  
    int a, b, c;
    
    

    
    cin >> k;

    for (int i = 0; i < k; i++){
        
        cin >> a >> b >> c;

        if ((a + b + c) >= 2){
            ans++; 
        };
        

    }

    cout << ans; 


    return 0;
}