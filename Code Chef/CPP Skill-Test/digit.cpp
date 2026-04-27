#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 222;
    int digit = 0;
    int sum = 0;
    int product = 1;

    while (num > 0)
    {
        digit = num%10;
        sum += digit;
        product *= digit;

        num /= 10;
    }

    cout << sum;
    cout << product;
    
    
    
}