#include <bits/stdc++.h>
using namespace std;

void primeGen(int m, int n) {
    // complete the function
    bool isPrime = true;
    for (int i = m; i <= n; i++) {
        
        for (int j = 2; j <= i/2; j++) {
            if(i%j == 0){
                isPrime = false;
                break;
            }
            else{
                isPrime = true;
            }
        }
        
        if(isPrime && i >=2){
            cout << i << endl;
        }   
    }
}

int main()
{
    // complete the function 
    int m, n;
    cin >> m >> n;
    
    primeGen(m, n);
    
}